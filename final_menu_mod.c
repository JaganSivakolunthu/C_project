#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct st{
        int roll_no;
    char name[40];
    float mark; 
    struct st *nxt;
} ST;
void modify(ST **);
void modify_roll(ST **);
void modify_name(ST **);
void modify_mark(ST **);
void print_repeated(ST ***,int );
int count_repeat_nm(ST **P, char *);
int count_repeat_mk(ST **P, float );
void modify(ST **ptr)
{
        char opt;
        puts("Enter the option to modify....");
        scanf(" %c",&opt);
        switch(opt)
        {
                case 'r':
                case 'R':       modify_roll(ptr);
                                break;
                case 'n':
                case 'N':       modify_name(ptr);
                                break;
                case 'p':
                case 'P':       modify_mark(ptr);
                                break;
                default : puts("Invalid option.....");
        }
}
void modify_roll(ST **ptr)
{
        ST *p = *ptr;
        int i;
        puts("Enter the roll nnumber to modify the student data....");
        scanf("%d",&i);
        while(p){
                if(p->roll_no == i){
                        puts("Enter the new data to modify the old data....");
                        scanf("%s%f",p->name,&p->mark);
                }
                p = p->nxt;
        }
}
void modify_name(ST **ptr)
{
    ST *p = *ptr;
    char bf[40];
    int c = 0, i = 0;
    puts("Enter the name to search for modification....");
    scanf("%s", bf);
    c = count_repeat_nm(ptr, bf);
    printf("%d\n", c);
    ST **temp = (ST **)malloc(c * sizeof(ST *));
    ST *curr = *ptr;
    i = 0;
    while (curr && i < c)
    {
        if (strcmp(curr->name, bf) == 0)
        {
            temp[i++] = curr;
        }
        curr = curr->nxt;
    }
    if (c == 1)
    {
        puts("Enter new name and marks:");
        scanf("%s %f", temp[0]->name, &temp[0]->mark);
    }
    else
        print_repeated(&temp, c);
}
void modify_mark(ST **ptr)
{
    ST *p = *ptr;
    float bf_m;
    int c = 0, i = 0;
    puts("Enter the mark to search for modification....");
    scanf("%f",&bf_m);
    c = count_repeat_mk(ptr, bf_m);
    printf("%d\n", c);
    ST **temp = (ST **)malloc(c * sizeof(ST *));
    ST *curr = *ptr;
    i = 0;
    while (curr && i < c)
    {
            if (curr->mark == bf_m)
        {
            temp[i++] = curr;
        }
        curr = curr->nxt;
    }
    if (c == 1)
    {
        puts("Enter new name and marks:");
        scanf("%s %f", temp[0]->name, &temp[0]->mark);
    }
    else
        print_repeated(&temp, c);
}
int count_repeat_nm(ST **P, char *p)
{
    ST *ptr = *P;
    int c = 0;
    while(ptr)
    {
        if(strcmp(ptr->name, p) == 0)
            c++;
        ptr = ptr->nxt;
    }
    return c;
}
int count_repeat_mk(ST **P, float p)
{
    ST *ptr = *P;
    int c = 0;
    while(ptr)
    {
        if(ptr->mark == p)
            c++;
        ptr = ptr->nxt;
    }
    return c;
}
void print_repeated(ST ***temp,int c)
{
        ST **t = *temp;
        for(int i=0;i<c;i++)
        printf("%d %s %f\n",t[i]->roll_no,t[i]->name,t[i]->mark);
        puts("calling the modify_roll()...");
        modify_roll(*temp);
}



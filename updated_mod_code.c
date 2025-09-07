#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct st{
	int roll_no;
    char nm[40];
    float mk;
    struct st *nxt;
} ST;
void add_end(ST **);
void print(ST **);
void modify(ST **);
void modify_roll(ST **);
void modify_name(ST **);
void modify_mark(ST **);
void print_repeated(ST ***,int );
int count_repeat_nm(ST **P, char *);
int count_repeat_mk(ST **P, float );
int main()
{
    ST *hptr = NULL;
    char opt;
    do{
        add_end(&hptr);
        puts("Want to add one more data...(y/n)");
        scanf(" %c",&opt);
    }while(opt == 'y');
    print(&hptr);
    modify(&hptr);
    print(&hptr);
}
void add_end(ST **ptr)
{
    ST *p = *ptr;
    ST *temp = (ST *)malloc(sizeof(ST));
    puts("Enter the data:");
    scanf("%d%s%f",&temp->roll_no,temp->nm,&temp->mk);
    temp->nxt = NULL;
    if(*ptr == 0)   *ptr = temp;
    else{
        ST *last = *ptr;
        while(last->nxt)    last = last->nxt;
        last->nxt = temp;
    }
}
void print(ST **ptr)
{
    ST* p = *ptr;
    puts("Displaying the data of the students structure.....");
    while(p)
    {
        printf("%d %s %f\n",p->roll_no,p->nm,p->mk);
        p = p->nxt;
    }
}

void modify(ST **ptr)
{
	char opt;
	puts("Enter the option to modify....");
	scanf(" %c",&opt);
	switch(opt)
	{
		case 'r':
		case 'R':	modify_roll(ptr);
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

int count_repeat_nm(ST **P, char *p)
{
    ST *ptr = *P;
    int c = 0;
    while(ptr)
    {
        if(strcmp(ptr->nm, p) == 0)
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
        if(ptr->mk == p)
            c++;
        ptr = ptr->nxt;
    }
    return c;
}

void print_repeated(ST ***temp,int c)
{
	ST **t = *temp;
	for(int i=0;i<c;i++)
	printf("%d %s %f\n",t[i]->roll_no,t[i]->nm,t[i]->mk);
	puts("calling the modify_roll()...");
	modify_roll(*temp);
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
			scanf("%s%f",p->nm,&p->mk);
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
        if (strcmp(curr->nm, bf) == 0)
        {
            temp[i++] = curr;
        }
        curr = curr->nxt;
    }
    if (c == 1)
    {
        puts("Enter new name and marks:");
        scanf("%s %f", temp[0]->nm, &temp[0]->mk);
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
	    if (curr->mk == bf_m) 
        {
            temp[i++] = curr;
        }
        curr = curr->nxt;
    }
    if (c == 1)
    {
        puts("Enter new name and marks:");
        scanf("%s %f", temp[0]->nm, &temp[0]->mk);
    }
    else
        print_repeated(&temp, c);
}


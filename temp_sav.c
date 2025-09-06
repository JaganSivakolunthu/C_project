#include<stdio.h>
#include<stdlib.h>
typedef struct st{
    int roll_no;
    char name[40];
    float mark;
    struct st* nxt;
} ST;

void add_end(ST** ,int*);
void print(ST** );

int main()
{
    int r=0;
    char opt;
    ST* hptr = NULL;
    do{
        add_end(&hptr ,&r);
        puts("Want to add one more data...(y/n)");
        scanf(" %c",&opt);
    }while(opt == 'y');
    printf("%d\n",r);
    print(&hptr);
    reverse_link(&hptr);
}

void add_end(ST** ptr ,int* cp)
{
    int r = *cp;
    ST* p = *ptr;
    ST* t = (ST*)malloc(sizeof(ST));
    puts("Enter the student data....");
    scanf("%s%f",t->name,&t->mark);
    t->roll_no = ++r;
    t->nxt = NULL;
    if(*ptr == NULL)
        *ptr = t;
    else
    {
        ST* last = p;
        while(last->nxt)
            last = last->nxt;
        last->nxt = t;
    }
    *cp = r;
}

void print(ST** ptr)
{
    ST* p = *ptr;
    puts("Displaying the data of the students structure.....");
    while(p)
    {
        printf("%d %s %0.2f\n",p->roll_no,p->name,p->mark);
        p = p->nxt;
        
    }
}


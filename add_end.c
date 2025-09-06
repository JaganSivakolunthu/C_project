#include<stdio.h>
#include<stdlib.h>
typedef struct st{
    int roll_no;
    char name[40];
    float mark;
    struct st* nxt;
} ST;

void add_end(ST** ,int*);

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
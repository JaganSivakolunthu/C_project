#include<stdio.h>
#include<stdlib.h>
typedef struct st{
    int roll_no;
    char name[40];
    float mark;
    struct st* nxt;
} ST;

void delete_all(ST**);

void delete_all(ST** ptr)
{
    ST* p = *ptr;
    ST* t;
    while(p)
    {
        t = p->nxt;
        free(p);
        p = t;
    }
    *ptr = NULL;
}

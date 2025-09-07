#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct st{
    char nm[40];
    float mk;
    struct st *nxt;
} ST;
void sort(ST **);
void sort_name(ST **);
void sort_mark(ST **);
void sort(ST **ptr)
{
        ST *p = *ptr;
        char opt;
        puts("Enter the mode of option for sorting... ");
        scanf(" %c",&opt);
        switch(opt)
        {
                case 'n':
                case 'N':       sort_name(&p);
                                break;
                case 'p':
                case 'P':       sort_mark(&p);
                                break;
                default:        puts("Invalid option....");
        }
}
void sort_name(ST **ptr)
{
    ST *p = *ptr;
    ST *q = NULL;
    int i=0;
    char bf[40];
    float mk_bf=0;
    while(p)
    {
        q = p->nxt;
        while(q)
        {
            i = strcmp(p->nm,q->nm);
            if(i>0){
                strcpy(bf,q->nm);
                mk_bf = q->mk;
                strcpy(q->nm,p->nm);
                q->mk = p->mk;
                strcpy(p->nm,bf);
                p->mk = mk_bf;
            }
            q = q->nxt;
        }
        p = p->nxt;
    }
}
void sort_mark(ST **ptr)
{
    ST *p = *ptr;
    ST *q = NULL;
    int i=0;
    char bf[40];
    float mk_bf=0;
    while(p)
    {
        q = p->nxt;
        while(q)
        {
            if(p->mk > q->mk){
                strcpy(bf,q->nm);
                mk_bf = q->mk;
                strcpy(q->nm,p->nm);
                q->mk = p->mk;
                strcpy(p->nm,bf);
                p->mk = mk_bf;
            }
            q = q->nxt;
        }
        p = p->nxt;
    }

}


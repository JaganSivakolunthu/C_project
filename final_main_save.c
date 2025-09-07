#include<stdio.h>
#include<stdlib.h>
typedef struct st{
    int roll_no;
    char name[40];
    float mark;
    struct st* nxt;
} ST;
void save(ST **);
void save_exit(ST **);
void exit_ws(void);
void save(ST **ptr)
{
        ST *p = *ptr;
        char opt;
        puts("Enter the option...");
        scanf(" %c",&opt);
        switch(opt)
        {
                case 's':
                case 'S': save_exit(ptr);
                          break;
                case 'e':
                case 'E': exit_ws();
                          break;

                default : puts("Invalid option....");
        }
}
void save_exit(ST **ptr)
{
        ST *p = *ptr;
        FILE *fp = fopen("data.dat","w");
        //FILE *fp = fopen("data.dat","a+");
        while(p){
                fprintf(fp,"%d %s %f\n",p->roll_no,p->name,p->mark);
                p = p->nxt;
        }
}
void exit_ws(void)
{
        FILE *fp = fopen("data.dat","a+");
        fclose(fp);
}


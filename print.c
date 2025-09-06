#include<stdio.h>
#include<stdlib.h>
typedef struct st{
    int roll_no;
    char name[40];
    float mark;
    struct st* nxt;
} ST;

void print(ST** );

void print(ST** ptr)
{
    ST* p = *ptr;
    puts("Displaying the data of the students structure.....");
    puts("");
    puts(" ________________________________________________");
    puts("|\t  |\t\t\t\t|\t |");
    puts("| roll_no |\t\t name \t\t|  mark  |");
    puts("|_________|_____________________________|________|");
    while(p)
    {
        printf("|    %d    | \t\t%s\t\t|  %0.2f |\n",p->roll_no,p->name,p->mark);
        p = p->nxt;
        
    }
     puts("|_________|_____________________________|________|");
}
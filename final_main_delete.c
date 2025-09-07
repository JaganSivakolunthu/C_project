#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct st{
    int roll_no;
    char name[40];
    float mark;
    struct st *nxt;
} ST;
typedef struct bf{
    int t_r;
    struct bf *nxt;
} BF;


void delete_node(ST **,BF **);
void delete_roll(ST **,BF **);
void delete_name(ST **,BF **);

void deletion_bf(BF **,int);


void delete_node(ST **ptr, BF **hp)
{
    //ST *p = *ptr;
    char opt;
    //use function
    puts("Enter the choice to delete the particular node....");
    scanf(" %c",&opt);
    switch(opt){
        case 'r':
        case 'R': delete_roll(ptr,hp);
                        break;

        case 'n':
        case 'N': delete_name(ptr,hp);
                        break;

        default : puts("Invalid input....");
                  break;
    }
}

void delete_roll(ST **p,BF **bhp)   // **p & **bhp holds the address of the head pointer of both structures....
{
    ST *ptr = *p;
    BF *bh = *bhp;
    ST *t;
    ST *last = NULL;  // Initially no previous node
    int r;  // declare a variable for the roll_no
    int TEMP;  // variable for passing in the buffer to store the deleted data...

    puts("Enter the roll number to delete the student data.....");
    scanf("%d", &r);
    while(ptr)
    {
        t = ptr->nxt;
        if((ptr->roll_no == r) && (ptr == *p))
        {
            TEMP = ptr->roll_no;
            add_bfend(&bh,TEMP);
            free(ptr);
            *p = t;
        }
        else if(ptr->roll_no == r)
        {
            TEMP = ptr->roll_no;
            add_bfend(&bh,TEMP);
            last->nxt = t;
            free(ptr);
        }
        else
            last = ptr;  // Only update 'last' if no deletion
        ptr = t;
    }
        *bhp = bh;
}

void delete_name(ST **p,BF **bhp)
{
    ST *ptr = *p;       //assining of std struct
    BF *bh = *bhp;      //assining of buffer struct
    ST *t;      //declaring a temporary variable to hold the addr.
    ST *last = NULL;  // Initially no previous node
    char nm[40];
    int TEMP;  // variable for passing in the buffer to store the deleted data...
    puts("Enter the name to delete the student data.....");
    scanf("%s", nm);
    while(ptr)
    {
        t = ptr->nxt;
        if((strcmp(ptr->name, nm) == 0) && (ptr == *p))
        {
            TEMP = ptr->roll_no;
            add_bfend(&bh,TEMP);
            free(ptr);
            *p = t;
        }
        else if(strcmp(ptr->name, nm) == 0)
        {
            TEMP = ptr->roll_no;
            add_bfend(&bh,TEMP);
            last->nxt = t;
            free(ptr);
        }
        else
            last = ptr;  // Only update 'last' if no deletion
        ptr = t;
    }
    *bhp = bh;
}

void deletion_bf(BF **bp,int t_num)
{
        BF *p = *bp;
        BF *t;
        BF *last ;
        while(p)
        {
                t = p->nxt;
                if((p->t_r == t_num)&&(p == *bp))
                {
                        *bp = t;
                        free(p);
                }
                else if(p->t_r == t_num)
                {
                        last->nxt = t;
                        free(p);
                }
                p = t;
                last = p;
        }
}


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
void add_end(ST **,int *,int *);
void print(ST** );
void delete_node(ST **);
void delete_roll(ST **);
void delete_name(ST **);
int main()
{
    char opt;
    ST *hptr = NULL;
    BF *b_hp = NULL;
    int roll = 0;
    int temp = 0;
    do{
        add_end(&hptr ,&roll ,&temp);
        puts("Want to add onr more data....(y/n)");
        scanf(" %c",&opt);
    }while(opt == 'y');
    print(&hptr);
    delete_node(&hptr,&b_hp);
    print(&hptr);
}
void add_end(ST **ptr,int *r,int *t)
{
    int r_n = *r;   //roll_no is initialized with the main func. variable
    int t_n = *t;   //temp_no(for comaprison on the purpose of deletion) is initialized
    ST *p = *ptr;
    ST *temp = (ST *)malloc(sizeof(ST));
    puts("Enter the student record...");
    scanf("%s%f",temp->name,&temp->mark);
    
    
//++r_n;  // as the roll number to be increased... by itself

    if(*hp == NULL){
        ++r_n;
        temp->roll_no = r_n;
        t_n = r_n;
    }
    else{
        
    }




    
   /* temp->roll_no = r_n;
    t_n = r_n; */
    
    
    temp->nxt = NULL;
    if(*ptr == NULL) *ptr = temp;
    else{
        ST *last = p;
        while(last->nxt)    last = last->nxt;
        last->nxt = temp;
    }
    *r = r_n;   //to update the roll_no in the main func.
    *t = t_n;   //to update the temp_no in the maain func.
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
            add_bfend(&bhp,TEMP);
            free(ptr);
            *p = t;
        }
        else if(ptr->roll_no == r)
        {
            TEMP = ptr->roll_no;
            add_bfend(&bhp,TEMP);
            last->nxt = t;
            free(ptr);
        }
        else
            last = ptr;  // Only update 'last' if no deletion
        ptr = t;
    }
}
void delete_name(ST **p)
{
    ST *ptr = *p;
    ST *t;
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
            add_bfend(&bhp,TEMP);
            free(ptr);
            *p = t;
        }
        else if(strcmp(ptr->name, nm) == 0)
        {
            TEMP = ptr->roll_no;
            add_bfend(&bhp,TEMP);
            last->nxt = t;
            free(ptr);
        }
        else
            last = ptr;  // Only update 'last' if no deletion
        ptr = t;
    }
}

void add_bfend(BF **ptr, tp)
{
    BF *p = *ptr;
    BF *temp = (BF *)malloc(sizeof(BF));
    temp->t_r = tp;
    if(*ptr == NULL){
        *ptr = temp;
        temp->nxt = NULL;
    }
    else{
        BF *last = *ptr;
        while(last->nxt)
            last = last->nxt;
        last->nxt = temp;
    }
    
}

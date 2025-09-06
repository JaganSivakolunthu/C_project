#include<stdio.h>
#include<stdlib.h>
typedef struct st{
    int roll_no;
    char name[40];
    float mark;
    struct st *nxt;
} ST;
void add_end(ST **,int *);
void print(ST** );
void delete_node(ST **);
void delete_roll(ST *);
void delete_name(ST *);
int main()
{
    char opt;
    ST *hptr = NULL;
    int roll = 0;
    int temp = 0;
    do{
        add_end(&hptr ,&roll);
        puts("Want to add onr more data....(y/n)");
        scanf(" %c",&opt);
    }while(opt == 'y');
    print(&hptr);
    delete_node(&hptr);
    print(&hptr);
}
void add_end(ST **ptr, int *r)
{
    int r_n = *r;
    ST *p = *ptr;
    ST *temp = (ST *)malloc(sizeof(ST));
    puts("Enter the student record...");
    scanf("%s%f",temp->name,&temp->mark);
    temp->roll_no = ++r_n;
    temp->nxt = NULL;
    if(*ptr == NULL) *ptr = temp;
    else{
        ST *last = p;
        while(last->nxt)    last = last->nxt;
        last->nxt = temp;
    }
    *r = r_n;//to update in the main
}
void print(ST** ptr)
{
    ST* p = *ptr;
    puts("Displaying the data of the students structure.....");
  //  puts("");
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
void delete_node(ST **ptr)
{
    ST *p = *ptr;
    char opt;
    //use function
    puts("Enter the choice to delete the particular node....");
    scanf(" %c",&opt);
    switch(opt){
        case 'r':
        case 'R': delete_roll(p);
                        break;
                        
     //   case 'n':
      //  case 'N': delete_name(p);
                        break;
                        
        default : puts("Invalid input....");
                  break;
    }
}
void delete_roll(ST *P)
{
    ST *ptr = P;
    ST *t ;
    ST *last = ptr;
    int r;
    puts("Enter the roll number to delete the student data.....");
    scanf("%d",&r);
    while(ptr)
    {
        t = ptr->nxt;
        if((ptr->roll_no == r)&&(ptr == P))
        {
         //   rBuff = ptr->roll;
            free(ptr);
            P = t;
        }
        else if(ptr->roll_no == r)
        {
         last->nxt = t;
         free(ptr);
        }
        ptr = t;
    }
}
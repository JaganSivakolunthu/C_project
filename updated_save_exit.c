#include<stdio.h>
#include<stdlib.h>
typedef struct st{
    int roll_no;
    char name[40];
    float mark;
    struct st* nxt;
} ST;
void add_end(ST **);
void print(ST **);
void save(ST **);
void save_exit(ST **);
void exit_ws(void);
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
    save(&hptr);
}
void add_end(ST **ptr)
{
    ST *p = *ptr;
    ST *temp = (ST *)malloc(sizeof(ST));
    puts("Enter the data:");
    scanf("%d%s%f",&temp->roll_no,temp->name,&temp->mark);
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
        printf("%d %s %f\n",p->roll_no,p->name,p->mark);
        p = p->nxt;
    }
}
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

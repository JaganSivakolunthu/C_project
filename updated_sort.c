#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct bf{
    int t_r;
    struct bf *nxt;
} BF;
void print(BF** );
void add_bfend(BF **,int);
//void deletion_bf(BF **,int);
void sort_bf(BF **, int);
int count(BF **);

int main()
{
	BF *hptr = 0;
	int x;
	char opt;
	do{	puts("Enter the data and the want to add further or not...");
		scanf("%d %c",&x,&opt);
		add_bfend(&hptr,x);
	}while(opt == 'y');
	print(&hptr);
	int cnt = count(&hptr);
	printf("%d\n",cnt);
	sort_bf(&hptr,cnt);
	print(&hptr);
}

int count(BF **hp)
{
	int C=0;
	BF *p = *hp;
	while(p){
		++C;
		p = p->nxt;
	}
	return C;
}

void sort_bf(BF **hp, int c)
{
	BF *p = *hp;
	BF *temp = 0;
        BF *t_up = 0;
	int x,t,i;
	puts("a");
	while(p){
		t = p->t_r;
		temp = p->nxt;
		t_up = p->nxt;
		i=1;
		for(i; i<c; i++)
		{
	puts("b");
			if(temp == NULL)	break;
			else if(temp->t_r < t){
				x = temp->t_r;
				temp->t_r = t;
				p->t_r = x;
				break;
			}
			temp = temp->nxt;
		}
		p = t_up;
	puts("c");
	}
}
/*

void sort_bf(BF **hp, int c)
{
    BF *p = *hp;
    BF *temp = NULL;
    int x;

    puts("a");
    while (p) {
        temp = p->nxt;
        while (temp) {
            puts("b");
            if (temp->t_r < p->t_r) {
                // Swap values
                x = temp->t_r;
                temp->t_r = p->t_r;
                p->t_r = x;
            }
            temp = temp->nxt;
        }
        puts("c");
        p = p->nxt;
    }
}
*/

void add_bfend(BF **ptr,int tp)
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

/*
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
*/

void print(BF **ptr)
{
    BF* p = *ptr;
    puts("Displaying the data of the buffer structure.....");
    while(p)
    {
        printf("%d\n",p->t_r);
        p = p->nxt;
        
    }
}


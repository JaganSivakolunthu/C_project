#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
    int val;
    struct list *nxt;
} l1;

typedef struct lst
{
    int val;
    struct lst *nxt;
} l2;

typedef struct ls
{
    int val;
    struct ls *nxt;
} R;


void add_1(l1 **ptr, int n)
{
    l1 *p = (l1 *)malloc(sizeof(l1));
    p->val = n;
    p->nxt = NULL;
    if(ptr)
        p->nxt = *ptr;
    *ptr = p;
}

void add_2(l2 **ptr, int n)
{
    l2 *p = (l2 *)malloc(sizeof(l2));
    p->val = n;
    p->nxt = NULL;
    if(ptr)
        p->nxt = *ptr;
    *ptr = p;
}

void add_r(R **ptr, int n)
{
    R *p = (R *)malloc(sizeof(R));
    p->val = n;
    p->nxt = NULL;
    if(ptr)
        p->nxt = *ptr;
    *ptr = p;
}


void print_reverse_recursive(l1 *ptr)
{
    if(ptr == NULL)
        return;

    print_reverse_recursive(ptr->nxt);

    // Print with formatting
    static int first = 1;
    if(first)
    {
        printf("[%d", ptr->val);
        first = 0;
    }
    else
    {
        printf(",%d", ptr->val);
    }
}

void prnt_reverse_recursive(l2 *ptr)
{
    if(ptr == NULL)
        return;

    prnt_reverse_recursive(ptr->nxt);

    // Print with formatting
    static int first = 1;
    if(first)
    {
        printf("[%d", ptr->val);
        first = 0;
    }
    else
    {
        printf(",%d", ptr->val);
    }
}


void prn_reverse_recursive(R *ptr)
{
    if(ptr == NULL)
        return;

    prn_reverse_recursive(ptr->nxt);

    // Print with formatting
    static int first = 1;
    if(first)
    {
        printf("[%d", ptr->val);
        first = 0;
    }
    else
    {
        printf(",%d", ptr->val);
    }
}
void finalize_print()
{
    printf("]\n");
}

/*struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
}
*/

int add(int n1, int n2)
{
    return n1+n2;
}

int main()
{
    int n1,t1,r1,n2,t2,r2,r,tr,rr;

    l1 *hptr=NULL;
    l2 *hp=NULL;
    R *hpt=NULL;

    puts("Enter the data for n1 and n2");
    scanf("%d%d",&n1,&n2);

    t1=n1;
    while(t1){
        r1 = t1%10;
        t1/=10;
        add_1(&hptr,r1);
    }

    t2=n2;
    while(t2){
        r2 = t2%10;
        t2/=10;
        add_2(&hp,r2);
    }
    print_reverse_recursive(hptr);
    finalize_print();
    prnt_reverse_recursive(hp);
    finalize_print();
    
    r=add(n1,n2);
    tr=r;
    while(tr){
        rr = tr%10;
        tr/=10;
        add_r(&hpt,rr);
    }
    
    prn_reverse_recursive(hpt);
    finalize_print();
}

#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
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

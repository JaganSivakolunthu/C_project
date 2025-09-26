#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,4,3,2,1};
	int i,j,n;
	n= sizeof a/ sizeof a[0];
	printf("%d\n",n);
	for(i=0,j=n-1;i<j;i++,j--) 	if((a[i]!=a[j]))	break;
	if(j>i)	printf("It is not a palindrome...\n");
	else 	printf("It is a palindrome...\n");
}

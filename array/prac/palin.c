#include<stdio.h>
int main()
{
//	int a[]={1,2,3,4,5,4,3,2,1};
	int a[]={0,1,2,3,4,4,3,2,1};
	int i,j,n,t;
	n=sizeof a/ sizeof a[0];
//	for(i=0,j=n-1;((i<n)||(j>=0));i++,j--)
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(a[i]==a[j])	continue;
		else 	printf("Its is not ihn palindrome\n");
	}
	if((i>j)||(i==j))	printf("The given array is in palindrome!!!\n");
}

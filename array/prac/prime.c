#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19};
	int n,i,j;
	n= sizeof a/ sizeof a[0];
	for(i=0;i<n;i++)
	{
		for(j=2;j<=(a[i]-1);j++)	if(a[i]%j==0)	break;
		if(a[i]==j)	printf("%d is a prime number\n",a[i]);
	}
//	if(a[i]==j)	printf("%d is a prime number\n",a[i]);
}


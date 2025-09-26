#include<stdio.h>
int main()
{
	int a[]={84,24,845,678,984,6461,4,6546,659,646,659,6,9,89,57,4,9};
	int n=sizeof a / sizeof a[0];
	int t,i,j;
	for(i=0; i<n; i++)      printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])	continue;
			else 
			{
				t=a[i];	
				a[i] = a[j];
				a[j]=t;
			}
		}
	//	printf("%d",a[i]);
	}
	for(i=0; i<n; i++)	printf("%d ",a[i]);
}

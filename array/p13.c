#include<stdio.h>
int main()
{
	int a[]={25,15,65,84,96,13,65,85,56};
	int n,first,second,i;
	n=sizeof a/ sizeof a[0];
	first = second =-1;
	for(i=0;i<n;i++)
	{
		if(a[i]>first)
		{
			second = first;
			first = a[i];
		}
		else if(a[i]>second && a[i]!= first)		second = a[i];
	}
	if(second == -1)	printf("ALL THE VALUES ARE REPEATED");
	else 	printf("%d ",second);
}


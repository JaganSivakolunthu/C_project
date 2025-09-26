#include<stdio.h>
int main()
{
//	int a[]={102,645,968,546,234,586,687,856};
	int a[]={30,50,20,10,40};
	int n=sizeof a/ sizeof a[0];
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int k=0;k<n;k++)	printf("%d ",a[k]);
}

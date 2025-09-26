#include<stdio.h>
int main()
{
//	int a[]={102,645,968,546,234,586,687,856};
	int a[]={30,50,20,10,40};
	int n=sizeof a/ sizeof a[0];
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	for(int k=0;k<n;k++)	printf("%d ",a[k]);
}

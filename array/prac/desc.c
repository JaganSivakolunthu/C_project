#include<stdio.h>
int main()
{
	int a[]={54,4,684,56654,6,6549,45665,46,9,7,659,65,0,-876,5485484,558,48956489,48,45489,489,489654,84,8994,89564,8958,4894};
	int n=sizeof a/ sizeof a[0];
	int i,j,t;
	for(i=0;i<n;i++)	printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(!(a[i]>a[j]))
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			else 	continue;

		}
	}
	for(i=0;i<n;i++)        printf("%d ",a[i]);
}

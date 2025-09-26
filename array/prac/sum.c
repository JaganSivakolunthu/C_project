#include<stdio.h>
int main()
{
	int a[5]={155,578,866,125,154};
	int i,sum=0;
	for(i=0;i<5;i++)	sum+=a[i];
	printf("%d",sum);
}

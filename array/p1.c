#include<stdio.h>
int main()
{
	int a[5];
	printf("The array is : \n");
	for(int i=0;i<5;i++)	scanf("%d",&a[i]);
	for(int i=0;i<5;i++)	printf("%d ",*(a+i));
}

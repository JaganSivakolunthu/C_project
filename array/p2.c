#include<stdio.h>
int main()
{
	int a[8];
	printf("Enter the array you needed\n");
	for(int i=0;i<=7;i++)	scanf("%d",&a[i]);
	printf("The array is...\n");
	for(int i=0;i<=7;i++)	printf("%d\t%p\n",*(a+i),(a+i));
	printf("The array in reverse order is....\n");
	for(int i=7;i>=0;i--)	printf("%d\t%p\n",*(a+i),(a+i));
}

#include<stdio.h>
int main()
{
	int a[8];
	printf("Enter the array you needed\n");
	for(int i=0;i<=7;i++)	scanf("%d",&a[i]);
	printf("The array is...\n");
	for(int i=0;i<=7;i++)	printf("%d\t%p\n",*(a+i),(a+i));
	printf("The array in reverse order without changing the address is....\n");
	for(int i=0,j=7;j>i;i++,j--)
	{
		int temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
	for(int i=0;i<8;i++ )	printf("%d\t%p\n",*(a+i),(a+i));
}

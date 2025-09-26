#include<stdio.h>
int main()
{
	int a[5],count=0,i,j;
	printf("Enter the elements of the array:");
	for(int i=0;i<5;i++)	scanf("%d",&a[i]);
	printf("THE ELEMENTS OF THE ARRAY ARE:");
	for(int i=0;i<5;i++)    printf("%d\n",a[i]);
	printf("The prime numbers in the array  are : \n");
	for(i=0;i<5;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			break;
		}
		if(j==a[i])
		{
			count++;
			printf("%d ",j);
		}
	}
	printf("The number of prime number present in the array  is : %d\n",count);
}

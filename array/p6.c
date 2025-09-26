#include<stdio.h>
int prime(int a[i])
{
	int count=0;
	for(int i=2; i<a[i]; i++)
	{
		if(a[i]%i==0)
			return 0;
		else
		{
			count++;
			return a[i];
		}
	}

}
int main()
{
	int a[5];
	printf("Enter the elements of the array:");
	for(int i=0;i<5;i++)	scanf("%d",&a[i]);
	printf("THE ELEMENTS OF THE ARRAY ARE:");
	for(int i=0;i<5;i++)    printf("%d\n",a[i]);
	printf("The prime numbers in the array  are : \n");
	for(int i=0;i<5;i++)
	{
		prime (a[i]);
		printf("%d ",a[i]);
	}
	printf("The number of prime number present in the array  is : %d\n",count);
}

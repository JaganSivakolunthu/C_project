#include<stdio.h>
int main()
{
	int a[5],ce=0,co=0;
	printf("Enter the elements of the array:");
	for(int i=0;i<5;i++)	scanf("%d",&a[i]);
	printf("THE ELEMENTS OF THE ARRAY ARE:");
	for(int i=0;i<5;i++)    printf("%d\n",a[i]);
	for(int i=0;i<5;i++)
	{
		if(a[i]%2==0)
			ce++;
		else
			co++;
	}
	printf("The number of even in the gi8ven array  is : %d\n",ce);
	printf("The number of odd in the gi8ven array  is : %d\n",co);
}

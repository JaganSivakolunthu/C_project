#include<stdio.h>
int main()
{
	int a[5],big;
	printf("Enter the elements of the array:");
	for(int i=0;i<5;i++)	scanf("%d",&a[i]);
	printf("THE ELEMENTS OF THE ARRAY ARE:");
	for(int i=0;i<5;i++)    printf("%d\n",a[i]);
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[i]>a[j])
			{
				 big=a[i];
			}
		}
	}
	printf("The biggest of the given number is : %d",big);

}

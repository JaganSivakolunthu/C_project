#include<stdio.h>
void fun(int n)
{
	int r,sum=0,p=1,c=0,C=0,t;
	t=n;
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			sum=sum+r;
			c++;
		}
		else
		{
			p=p*r;
			C++;
		}
		n=n/10;
	}
	c==0?printf("No Even digit present in the number\n"):printf("Sum of %d ---> %d\n",t,sum);
	C==0?printf("No Odd digit present in the number\n"):printf("Product of %d ---> %d\n",t,p);
}

int main()
{
	int num[3];
	puts("Enter the array of number:");
	for(int i=0;i<3;i++)	scanf("%d",&num[i]);
	for(int i=0;i<3;i++)
	fun(num[i]);

}

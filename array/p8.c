#include<stdio.h>
int main()
{
	int a[12]={5,49,62,5,46,11,49,5,11,5,46,2};
	int c;
	for(int i=0;i<12;i++)
	{
		c=0;
		for(int j=0;j<12;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		printf("%d is repeated %d times\n",a[i],c);
	}
}

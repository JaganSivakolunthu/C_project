#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,0};
	int n=sizeof a / sizeof a[0];
	char x;
	int ind;
	printf("Enter the index value to be shifted:\n");
        scanf("%d",&ind);
	int t[ind];
	printf("Enter the type of rotation:\n");
	scanf(" %c",&x);
	switch(x)
	{
		case 'l':
//			printf("Enter the index value to be shifted:\n");
//			scanf("%d",&ind);
			for(int i=0;i<ind;i++)
			{
				t[i] = a[i];
				printf("is %d ",t[i]);
			}
			for(int j=0;j<n-ind;j++)
			{
				a[j]=a[j+ind];
				printf("%d ",a[j]);
			}	
			for(int j=n-ind-1;j<n;j++)	for(int i=0;i<ind;i++)	a[j]=t[i];
			break;
		default:
			printf("Invalin input given!!!");
	}
}

#include<stdio.h>
int main()
{
	int a[]={896,984,765,846,548,669,365,154,956,453,510,654};
	int b[]={2575,5247,8724,2121,6854};
	//int c[n+N];
	int n=sizeof a/ sizeof a[0];
	int N=sizeof b/ sizeof b[0];
	int i,j=0;
	int c[n+N];
	for(i=0;i<n; i++)
	{
		c[j++] = a[i];
	}
	for(i=0;i<N; i++)
        {
                c[j++] = b[i];
        }
	for(i=0;i<n+N;i++)	printf("%d ",c[i]);
}

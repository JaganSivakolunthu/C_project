#include<stdio.h>
int main()
{
        int a[] = {10,20,22,30,10,40,50,22,10,88,34,50,20,40,30};
        int i,j,c,n,ele;
        n = sizeof a/sizeof a[0];
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
	for(i=0;i<n;i++)
        {
                for(j=0;j<i;j++)  
		{
                 if(a[i]==a[j])
                 break;
                }
                if(j==i) //confirmation that a[i] doesn't exist till  from 0 to i-1 position 
                {  
                        for(j=0,c=0;j<n;j++){
                        	if(a[i] == a[j])
                       		break;
				printf("%d ",a[i]);
			}
		//	if(c>1)
//                        printf("%d---->%d times\n",a[i],c);
                }
        }
}

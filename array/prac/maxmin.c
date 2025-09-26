#include<stdio.h>
int main()
{
	int a[5]={1511,635,96,95612,54};
	int max,min=a[0],i;
	for(i=0;i<5;i++){

		if(a[i]>max)	max=a[i];
	//	printf("%d is the maxima",max);
		if(a[i]<min)	min=a[i];
	//	printf("%d is the minima",min);
}
		printf("%d is the maxima",max);
		printf("%d is the minima",min);
}

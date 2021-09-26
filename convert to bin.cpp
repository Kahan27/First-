#include<stdio.h>
#define l sizeof(int)*8
int main()
{
	int a[l],b,i,j,k;
	printf("enter a num you want to convert to binary");
	scanf("%d",&b);
	for(i=l-1;i>=0;i--)
	{
		a[i]=b&1;
		b=b>>1;
	}
	printf("converted in binary: ");
	for(j=0;j<l;j++)
	{
		printf("%d",a[j]);
	}
}

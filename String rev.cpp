#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,j,l;
	printf("enter a string");
	gets(a);
	l=strlen(a);
	for(i=0,j=l-1;i<l,j>=0;i++,j--)
	{
		b[j]=a[i];
	}
	printf("the reversed string is: ");
	puts(b);
	
}

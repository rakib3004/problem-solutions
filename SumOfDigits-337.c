//6.sum of all digit of a number
#include <stdio.h>
int main()
{
	int count=0,i,n,s=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		s=s+n%10;
		n=n/10;
		count++;

	}
	printf("sum= %d",s);
	}

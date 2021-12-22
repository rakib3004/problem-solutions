#include <stdio.h>
int main()
{
	int n1,n2,rem,s=0,count=0,n,i;
	int x_factor=0;
	scanf("%d",&n);
	x_factor=n;
	for(i=0;n!=0;i++)
	{
		s=s+n%10;
		count ++;
		n=n/10;
		}
	n2=s;
	n1=x_factor;
	while(n2!=0)
		{

			rem=n1%n2;
			n1=n2;
			n2=rem;
		}
		printf("%d",n1);
	}

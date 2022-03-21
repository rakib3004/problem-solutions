#include <stdio.h>
int main()
{
	int n,i,s=0;
	int a[n];
	printf("Enter element size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}


	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("sum of array= %d",s);
return 0;
}

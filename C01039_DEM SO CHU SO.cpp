#include<stdio.h>
int main()
{
	int n,m, dem=0;
	scanf("%d", &n);
	while(n>0)
	{
		m=n%10;
		n=n/10;
		if(m>=0)
		{
			dem++;
		}
	}
	printf("%d", dem);
}


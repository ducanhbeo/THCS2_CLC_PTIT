#include <stdio.h>
int main()
	{
		int n,m,sum=0;
		scanf("%d", &n);
		while(n!=0)
			{
				m=n%10;
				n=n/10;
				sum+=m;				
			}
		printf("%d", sum);
	}


#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	while(x--)
	{
		int n,m;
		scanf("%d", &n);
			m=n%10;
		while(n>9)
		{			
			n=n/10;
		}
		if (n==m)
			printf("YES\n");
		else
			printf("NO\n");
	}
}


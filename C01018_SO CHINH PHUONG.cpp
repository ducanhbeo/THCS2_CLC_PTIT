#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int x;
		scanf("%d", &x);
		
		if((int)sqrt(x)==sqrt(x))
			printf("YES");
		else printf("NO");
		printf("\n");
		
	}
}


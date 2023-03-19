#include <stdio.h>
int main()
{ 
	unsigned int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%lld\n", (long long)a*b);
	printf("%d\n", a/b);
	printf("%d\n", a % b);
	printf("%.2f\n", (float)a/b);
	return 0;
}


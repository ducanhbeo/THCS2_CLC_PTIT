#include<stdio.h>
int main()
{
	int n,m,t=1;
	scanf("%d", &n);
	while(n>0)
	{
		m=n%10;
		n=n/10;
		t=t*m;
	}
	printf("%d", t);
}


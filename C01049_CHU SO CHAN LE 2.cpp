#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,m;
	scanf("%d", &n);
	int demle=0, demchan=0;
	while(n>0)
	{
		m=n%10;
		n=n/10;
		if(m%2==0)
		demchan++;
		else 
		demle++;
	}
	printf("%d %d\n", demle,demchan);
	}
}


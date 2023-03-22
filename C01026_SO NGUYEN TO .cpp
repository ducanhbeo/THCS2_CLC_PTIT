#include<stdio.h>
#include<math.h>


int snt (int n)
{
if(n<2)
	return 0;
else
	for(int i=2; i<=sqrt(n);i++)
	{
		if (n%i==0)
		return 0;
	}
return 1;
}
int main()
{
	int a;
	scanf("%d", &a);
	while(a--)
	{
		int b;
		scanf("%d", &b);
		if(snt(b))
			printf("YES\n");
		else
			printf("NO\n");
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	



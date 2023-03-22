#include<stdio.h>
 int ucln(int a,int b)
{
	int r;
	while(b!=0)
	{
		
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n", ucln(a,b));
	}
} 




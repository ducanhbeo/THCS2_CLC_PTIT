#include <stdio.h>
int main()
{	
	int number[10],i;
	int n;
	scanf("%d", &n);
	if(n>=1 && n<=9)
	{
	for(i=1;i<=10;i++)	{
	number[i]= n*i;
	printf("%d ",number[i]);
}
	}

}


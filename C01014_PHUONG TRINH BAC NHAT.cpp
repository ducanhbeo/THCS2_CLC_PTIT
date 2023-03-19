#include <stdio.h>
int main ()
{
	float a,b;
	float c;
	scanf("%f %f", &a, &b);
	if(a==0 && b==0)
		printf("Vo so nghiem");
	if (a==0 && b!=0)
		printf("Vo nghiem");
	if (a!=0 && b!=0)
		{
			c=-b/a;
			printf("%.2f", c);
		}	
	return 0;
}


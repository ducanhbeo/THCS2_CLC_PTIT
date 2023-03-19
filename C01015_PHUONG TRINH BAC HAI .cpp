#include <stdio.h>
#include <math.h>
int main ()
{
	float denta;
	int a,b,c;
	scanf("%d %d %d",&a, &b, &c);
	denta=b*b-4*a*c;
	if (denta>0)
		{
		float x1,x2;
		x1=(-b+sqrt(denta))/(2*a);
		x2=(-b-sqrt(denta))/(2*a);
		printf("%.2f %.2f", x1, x2);
		}
	if (denta==0)
		printf("%.2f", (float) -b/2*a);
	if (denta <0) 
		printf("NO");
	return 0;
}


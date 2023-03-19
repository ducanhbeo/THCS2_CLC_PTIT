#include <stdio.h>
int main()
{
	int n;
	float a;
	scanf("%d", &n);
	while (n--){
		scanf("%f",&a);
		if (a>0){
			printf("%.15f\n", (double)1/a);
		}
	}
	return 0;
}


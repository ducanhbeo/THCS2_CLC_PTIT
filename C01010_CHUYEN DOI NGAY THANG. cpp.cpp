#include <stdio.h>
int main(){
	int d,w,y,d1,d2;
		scanf("%d",&d);
	if(d>0 && d<1000){	
		y=d/365;
		d1=d%365;
		w=d1/7;
		d2=d1%7;
		printf("%d %d %d", y,w,d2);
}
}


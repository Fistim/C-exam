#include <stdio.h>

/*
(x1 - x) * (y2 - y1) - (x2 - x1) * (y1 - y)
(x2 - x) * (y3 - y2) - (x3 - x2) * (y2 - y)
(x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y)
*/

int main(void)
{
	float fp, sp, tp;
	float x, y; 
	printf("Enter coord X: ");
	scanf("%f%f", &x, &y);
	fp = -5*(0 - x) - 2*(2 - y);
	sp = -6*(2 - x) - -4*(-3 - y);
	tp = -1*(-2 - x) - -2*(-3 - y);
	if((fp>0 && sp>0 && tp>0) || (fp<0 && sp<0 && tp<0) || fp==0 || sp==0 || tp==0){
		printf("Point is inside of triangle.");
	}
	else
		printf("Point is outside of triangle.");
	return 0;
}

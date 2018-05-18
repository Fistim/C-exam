#include <stdio.h>
#include <math.h>

/*
10.	Определить, пересекает ли линия y=ax+b ось абсцисс. Если пересекает, найти точку пересечения.
*/

int main(void){
	float x, a, b;
	
	printf("Enter A: ");
	scanf("%f", &a);
	printf("Enter B: ");
	scanf("%f", &b);
	

	
	if(a==0){
		printf("\nTochek net");
	}
	if(b<0){
		x = fabs(b)/a;
			printf("\nTocka peresecheniua: x=%.2f", x);
	}
	
	if(a<0 && b>0){
		x = fabs(b)/fabs(a);
		printf("\nTocka peresecheniua: x=%.2f", x);
	}
	if(a>0 && b>0){
		x = -b/a;
		printf("\nTocka peresecheniua: x=%.2f", x);
	}
		return 0;
}

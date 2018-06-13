#include<stdio.h>
#include<math.h>
#include<locale.h> 
int main()
{
	setlocale(LC_ALL,"rus");
    int x0, y0, r, x1, y1, a, b;
    printf("Координата центра x: "); scanf("%d", &x0);
    printf("Координата центра y: "); scanf("%d", &y0);
    printf("Радиус: "); scanf("%d", &r);
    printf("X: "); scanf("%d", &x1);
    printf("Y: "); scanf("%d", &y1);
    a = (x0-x1);    
    b = (y0-y1);
    if(pow(a,2)+pow(b,2)<=pow(r,2)) 
	printf("Принадлежит.\n");
    else 
	printf("Не принадлежит.\n");
    return 0;
}

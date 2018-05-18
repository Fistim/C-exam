#include <stdlib.h> 
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	float x1, x2, x3, x4, y1, y2, x, y; 
x1 = -1; 
x2 = 1; 
x3= -2;
x4= 2;
y1 = -3; 
y2 = 2; 
printf("\n\tДана область от (-1;1)  и от (-2;2) до (-3;2) ");
printf ("\nX: ");
scanf("%f",&x);
printf ("Y: ");
scanf("%f",&y);
if ((-2 <= x && 2 >= x && -3 <= y && 2 >= y) || (-1 >= x && 1 <= x) || (x==-2 && y==-3) || (x==2 && y==-3) || (x==0 && y==2))
{
printf("\n\tTochka prinadlezit"); 
}
else
printf("\n\tTochka ne prinadlezit");
return 0;
}

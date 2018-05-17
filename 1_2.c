#include <math.h> 
#include <stdlib.h> 
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "rus");
	float x1, x2, y1, y2, x, y; 
x1 = -1; 
x2 = 1; 
y1 = -3; 
y2 = 2; 
printf("\n\tДана область от (-1;1) до (-3;2)");
printf ("\nX: ");
scanf("%f",&x);
printf ("Y: ");
scanf("%f",&y);
if (x1 <= x && x2>=x) 
{ 
if (y1 <= y && y <= y2) 
{ 
printf("\n\tTochka prinadlezit");
}
else
{
printf("\n\tTochka ne prinadlezit");
} 
}
else
{
printf("\n\tTochka ne prinadlezit");
}
return 0;
}

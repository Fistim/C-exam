#include <iostream> 
#include <math.h> 
#include <stdlib.h> 
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "rus");
	int x1, x2, y1, y2, x, y; 
x1 = -1; 
x2 = 3; 
y1 = -2; 
y2 = 4; 
printf("\n\tДана область от (-1;-2) до (3;4)");
printf ("\nX: ");
scanf("%d",&x);
printf ("Y: ");
scanf("%d",&y);
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

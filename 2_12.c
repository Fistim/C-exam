#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "rus");
	float x, y, h;
	h=0.25;
	x=-2;
	while(x<=2)
	{
		y = -1.3*(x*x)- (pow(exp (1.0), x)/4);
		printf("|x=% 3.2f |y=%2.2f| \n", x, y);
		x+=h;
	}
	getch();
}

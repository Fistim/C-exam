#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main ()
{
	int a,b,c,d=0,x1=0,x2=0;
	setlocale(LC_ALL, "rus");
	printf("Числа a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	printf("D=%d\n",d);
	d=sqrt(d);
	if(d<0)
{
		printf ("Корней нет");
}
	if (d==0)
	{
		x1=-b/(2*a);
		printf ("X1=%d\n",x1);
	}
	if(d>0)
	{
		x1=(-b+d)/(2*a);
		x1=(-b-d)/(2*a);
		printf ("X1=%d\n",x1);
		printf ("X2=%d\n",x2);
	}

	return 0;
}

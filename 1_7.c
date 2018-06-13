#include <stdio.h>
#include <Windows.h>
#include <math.h>
int main()
{	system("color F5");
	int  m,b,a,k;
	printf("Tocka peresecheniy liniy y=ax+b  i  y=kx+m\n");
	printf("\na: ");
	scanf("%i",&a);
	printf("b: ");
	scanf("%i",&b);
	printf("k: ");
	scanf("%i",&k);
	printf("m: ");
	scanf("%i",&m);	
	if ((m==0 && b==0) || (a==0 && k==0))
	{
		printf ("\nNet reshenia");
	}
	float x;
	x=(m-b)/(a-k);
	printf("\n%2.2f=(%i-%i)/(%i-%i)", x,m,b,a,k);
	printf("\n\nx:%2.2f", x);
	return 0;
}

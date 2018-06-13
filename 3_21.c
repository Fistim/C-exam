#include <stdio.h>
#include <time.h>
#include <math.h>
#include <Windows.h>
#define N 10
int main (void)
{system("color F0");
srand(time(NULL));
	int i,q=0,k=1,min;
	int a[10];
	for (i=0; i<10; ++i)
	{ 
	a[i]=rand()%10-5; 
	printf("%2d,", a[i]);}
	min = a[i];
	for(i=0; i<10; ++i)
	{
		if (a[i]<min)  {
		min=a[i];
		q=i+1;}
	}
	printf("\n\n----->MIN: %d", min);
printf("\nQ= %d ", q);
    	
	for (i=q;i<N;i++)
	{
		k=k*a[i];
	}
	printf ("\n%d", k);
	return 0;
	}

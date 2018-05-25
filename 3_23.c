#include <stdio.h>
#include <time.h>
#include <math.h>
#include <Windows.h>
#define N 10
int main (void)
{system("color F0");
srand(time(NULL));
	int i,min;
	int a[10];
	float k=0,q=0,z;
	printf("\n\n");
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
    printf("\n\nNomer a[min]= %2.0f ", q);
    	
	for (i=0;i<q-1;i++)
	{
	k+=a[i];	
    }
	printf ("\n\nSymma= %6.2f", k);
	z=k/q;
	printf("\n\nSr.znach= %6.2f", z);
	return 0;
	}

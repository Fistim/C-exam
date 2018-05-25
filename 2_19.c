#include <stdio.h>
#include <Windows.h>
#include <math.h>
int main (void)
{	system("color F5");
	int N,i,x,y;
	float k,p,max,min;	
	printf ("\n\n----->N:  ");
	scanf ("%d", &N);
	int a[N];
	for (i=0; i<N; ++i) {
	printf ("\n");
	printf ("a=",i);
	scanf ("%d",&a[i]);	}
	max = a[0]; min = a[0];
	for(i=0; i<N; ++i) {
	if (a[i]>max)
	max=a[i];
	if (a[i]<min)
	min=a[i];
	if (max==0 || min==0)
	printf ("\nNet reshenia\n");}
	printf("\n----->MAX: %2.1f", max);
	printf("\n\n----->MIN: %2.1f", min);
	printf("\n\nOtnoshenie MAX k MIN: ");
	k=max/min;
	printf("\nMAX/MIN: %3.1f",k);
	printf("\n\nOtnoshenie MIN k MAX: ");
	p=min/max;
	printf("\nMIN/MAX: %3.1f",p);
	return 0;
}

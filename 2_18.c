#include <stdio.h> 
int main (void)
{	int N, max=0, i;
    printf ("\nN: "); scanf ("%d", &N);
	int a[N];
    for (int i = 0; i<N; i++) {
   	printf ("\n");
    printf ("a=", i); scanf ("%d", &a[i]); }
    for(i=0; i<N; i++)
	{ if (a[i] > max) max = a[i]; }
    printf("\nMAX: %d\n",max);
    return 0;
    }

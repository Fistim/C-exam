#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10
int main()
{
    srand (time(0));
	int a[n];
    int buf, i,j,s,k;
    printf("\n\tMAssiv 10:\n\n");
    for (i=0;i<n;i++){
    a[i] = rand()%10-5;
    printf("%3d ", a[i]); }
    printf("\n");
    for(k=0;k<n;k++){          
	for(i=0;i<n;i++){
		if(a[k]>a[i]){
            buf=a[k];
            a[k]=a[i];
            a[i]=buf;}
            }
    }
    printf ("\tV poruadke ybevaniya:\n\n");
    for (i=0;i<n;i++){
        printf("%2d ", a[i]); }
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    

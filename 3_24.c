#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define N 10
int main (void)
{
	int i,r,max,k=0;
	int a[10];
	for (i=0; i<10; ++i)
{
    printf("a[%d] : ",i+1);
    scanf("%d",&a[i]);
}
max = a[0];
for(i=0; i<10;++i)
{if (a[i]>max)
max=a[i];
r=max-1;
}
printf("\n----->MAX: %d \n", max);
for(i=0; i<10; ++i){
	if(a[i]==r){
	k++;}
}
	printf("\n\n----->Kol-vo: %d", k);
    return(0);
}

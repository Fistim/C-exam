#include <math.h> 
#include <stdlib.h> 
#include <stdio.h>
 
int main(void)
{
int h = 1;
int sum = 0;
int otr = 0;
while(h != 0)
{
scanf("%d",&h);
if(h < 0)
otr++;
else if(h > 0)
sum += h;
}
printf("\nOtricatelnih:%d ",otr);
printf("\nSymma:%d ",sum);
return 0;
}

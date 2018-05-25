#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"rus");
	int N,i,q;
	q=1;
	printf("¬ведите кол-во элементов в массиве: ");
	scanf("%d", &N);
	int a[N];
	for(i=1; i<=N; i++)
	{
		a[i-1] = i;
	}
	for(i=1; i<=N; i++)
	{
		if(i%3==0)
	  {
	  	q=q*i;
	  }  
	}
	printf("q=%d",q);
	
}

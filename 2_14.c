#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL, "rus");
	int s=0, n, i;
	int a[n];
	for(i=10; i<=99; i++)
	{
		if(i%10==0)
		{
			printf(" %d ", i);
			s++;
		}
	}
	printf("\nРезультат: %d", s);
}

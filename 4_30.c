#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define n 8
#define m 8
#define k 8
int main()
{
	int i,j,a,rez;
	int min;
	int max=0;
	int Array[n][m];
	int new_Array[k];
    printf("Исходная матрица:\n");
    srand (time(0));
    for (i=0;i<n;i++)
    {
		for (j=0;j<m;j++)
		{
            Array[i][j]=rand()%100;
            printf("%2d ", Array[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<n;i++)
    {
		for (j=0;j<m;j++)
		{
			if (Array[i][j]>max)
			{
				max=Array[i][j];
			}
			if (min>Array[i][j])
			{
				min=Array[i][j];
				a=j;
			}
		}
	}
	printf ("\nМинимальный элемент: %d %d %d", min,a,max);
	rez=max;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (Array[i][j]==Array[i][a])
			{
				new_Array[k]=Array[i][j];
				printf ("\n[%d] : %d", j,new_Array[k]);
			}
		}
	}
	printf ("\n%d", rez);
    return 0;
}

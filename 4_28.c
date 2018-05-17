#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define n 5
#define m 5
int main()
{
    srand (time(0));
	int a[n][m];
    int buf, i,j,s,k;
    printf("Исходная матрица:\n");
    for (i=0;i<n;i++)
    {
		for (j=0;j<m;j++)
		{
            a[i][j] = rand()%999-1;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
	printf("\n\n");
    for(k=0;k<n;k++)
    {
        for(s=0;s<m;s++)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
					if(a[k][s]<a[i][j])
                    {
                        buf=a[k][s];
                        a[k][s]=a[i][j];
                        a[i][j]=buf;
                    }
                }
            }
        }
    }
	for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(k=0;k<n;k++)
    {
        for(s=0;s<m;s++)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
					if(a[k][s]>a[i][j])
                    {
                        buf=a[k][s];
                        a[k][s]=a[i][j];
                        a[i][j]=buf;
                    }
                }
            }
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        printf("%d ", a[i][j]);
        printf("\n");
    }
    printf ("\n\n");
    for (i=0;i<2;i++)
    {
		for (j=0;j<5;j++)
		printf("%d ", a[i][j]);
    }
    return 0;
}

#include <stdio.h>
int main ()
{
	int i,j,n,b;
	int a[9999];
	int z[6];
	printf ("Введите размерность массива : ");
	scanf ("%d", &n);
	printf ("Введите элементы массива\n");
	for (i=0;i<n;i++)
	{
		printf ("a[%i]=", i);
		scanf ("%d", &a[i]);
	}
	printf ("\n"); 
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (a[j]<a[j+1])
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
      
			}
		}
	}
	n=6;
	for (i=0;i<n;i++)
	{
		z[i]=a[i];
		if (z[i]%2!=0)
		{
			printf ("%d", z[i]);
		}
	}
	printf ("\n");
	return 0;
}

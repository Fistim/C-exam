#include <stdio.h>
int main ()
{
    int n,i,k=0;
    int Array[i];
    printf ("Введитее количество эллементов n: ");
    scanf ("%d", &n);
    for (i=0;i<n;i++)
    {
		printf ("Введите %d элемент: ", i);
        scanf ("%d", &Array[i]);
    }
    printf ("\n");
    for (i=0;i<n;i++)
    {
        printf ("%d ", Array[i]);
    }
    for (i=0;i<n;i++)
    {
		if (Array[i]==Array[i+1])
        {
            k=k+2;
        }
	}
    printf ("\n\nКоличество одинаковых рядом стоящих чисел: %d", k);
    return 0;
}

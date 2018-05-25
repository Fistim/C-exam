#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main (void)
{setlocale(LC_ALL,"rus");
int a=1, n, i, sum=0, k, P;
    printf("Введите число для факториала: ");  scanf("%d", &n);
	for(i=1; i<=n; i++) {  a=a*i; }
	printf("Факториал числа %d равен: %d", n, a);
	for(i=0;i<=n;i++){  sum += n; } k=sum/2;
	printf("\nСумма: %d", k);
	P=a/k; printf ("\nОтвет: %d", P);
	return 0;
}

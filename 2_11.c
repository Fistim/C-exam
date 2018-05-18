#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
				setlocale(LC_ALL,"rus");
float xk, det_x, x0, F , x;
printf ("\nПрошу задайте значения переменных\n");
printf("Введите нижнюю границу: "); 
scanf ("\n\t%f", &x0);
printf("Введите верхнюю границу:  "); 
scanf ("\n\t%f", &xk);
printf("Задайте шаг: "); 
scanf ("\n\t%f", &det_x);
printf ("\n_________________\n");
for (x=x0;x<xk;x+=det_x)
{ 

F = (5.4*(x*x*x))-(2.8*(x*x))-x+1.6; 


printf ("|F= |\t%6.2f\t|\n", F);}
printf ("|___|___________|\n");

	getchar();
return 0;
}


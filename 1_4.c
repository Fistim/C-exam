#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>

main()
{	setlocale(LC_ALL, "rus");
	int a, k; 
	printf("Введите A: \n");
	scanf("%d", &a);
	k=fmod(a, 7); 
	switch(k%7)
	{
		case 0:
			printf("Воскресенье");
			break;
		case 1:
			printf("Понедельник"); 
			break; 
		case 2:
			printf("Вторник");
			break;
		case 3:
			printf("Среда"); 
			break;
		case 4:
			printf("Четверг"); 
			break;
		case 5:
			printf("Пятница");
			break;
		case 6:
			printf("Суббота"); 
			break;
	}
	getch();
}

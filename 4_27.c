#include <locale.h>
#include <math.h>
#include <time.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>

 int main()
 {
 	system ("chcp 1251");
 	system ("cls");
 	system ("color F5");
 	srand(time(NULL));
 	setlocale (LC_ALL,"rus");
 	int a[4][4];
    int i,j;
 	printf ("\n\tMATRIX\n\n");
 	for (i = 0; i<4; i++) 
 	{
 	    for (j = 0; j<4; j++) 
 	    {
 		a[i][j] = rand() % 5-3; 
        printf("%5d", a[i][j]);
	    }
	    printf ("\n");
	}
	if (a[0][0]<0)
	{
	printf ("\nStroka: ");
	for(j=0; j<4; j++)	
	printf (" %d, ", a[0][j]);		
		
	printf("\n\nV obratnom poradke: ");
	for(j=3; j>=0; j--)	
	printf (" %d, ", a[0][j]);
	
	a[0][0]=a[0][3];
	
	printf("\n\nVektor B: ");
	for(j=0; j<4; j++)
	printf (" %d ", a[j][0]);	

    }
    else
    {
    printf("Nichego ne menyaem, poprobyu esho raz");
    }		
 	return 0;
 }

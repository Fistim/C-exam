#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (){
	srand (time(NULL));
	int i, j, a[10][10];
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			a[i][j]=rand()%100-10;
			printf ("%5d ", a[i][j]);
		}
		printf ("\n");
	}
	printf ("\n\n"); 
	for (i=0;i<10;i++){

	}	
	printf ("\n\n\n\n %d", a[9][0]);
	printf (" %d", a[8][1]);
	printf (" %d", a[7][2]);
	printf (" %d", a[6][3]);
	printf (" %d", a[5][4]);
	printf (" %d", a[4][5]);
	printf (" %d", a[3][6]);
	printf (" %d", a[2][7]);
	printf (" %d", a[1][8]);
	printf (" %d", a[0][9]);
	
	
	int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
	printf ("\n\n Vvedide dannii vektor:");
	scanf ("%d%d%d%d%d%d%d%d%d%d",&a0,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9);
	int n=10;
	int z[n]={a0,a1,a2,a3,a4,a5,a6,a7,a8,a9};
	int b;
	char min=0;
    char max=0;
	for (i=0;i<n;i++)
    {
      if (z[i]<z[min]) min=i;
      if (z[i]>z[max]) max=i;
  }
  b=z[min];
  z[min]=z[max];
  z[max]=b;
  printf ("\n\nNew wektor:");
  for (i=0;i<n;i++)
  printf("%d ", z[i]);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6
#define predel 20
// Исправить кодировку
int i_comp(const void *a, const void *b)
{
        return *(int*)a - *(int*)b;
}
 
int main(void)
{
	     system("chcp 1251 >nul");
         srand(time(NULL));
        int i, j, l, mat[N][N];
        int diag[N];
        for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
        mat[i][j] = rand() % predel;
        printf("\n\nЗаполняем матрицу случайными числами от 0 до %d:\n\n", predel);
        for(i = 0; i < N; i++)
        {       
		        for(j = 0; j < N; j++)
                printf("%d\t", mat[i][j]);
                puts("\n\n");
        }
        puts("\nСоздаем отображение матрицы симметрично побочной диагонали:\n");
        	j = 1;
        	l = 1;
        for(i = 0; i < N; i++)
        {
                for(; j < N; j++)
                mat[j][i] = mat[i][j];       
                j = ++l;	
        }
        for(i = 0; i < N; i++)
        {
                for(j = 0; j < N; j++)
                printf("%d\t", mat[i][j]);
                puts("\n\n");
        }
    printf("Побочная диагональ возвёденная в квадрат:"); 
        for(i = 0; i < N; i++)
        {    
              	mat[i][i]*=0;
     			printf("%5d", mat[i][i]);      
        }
       puts("\n\n");
       printf("Полученный массив после получения симметрии:");
       puts("\n");
         for(i = 0; i < N; i++)
        {
                for(; j < N; j++)
                mat[j][i] = mat[i][j];
                j = ++l;
        }
        for(i = 0; i < N; i++)
        {
                for(j = 0; j < N; j++)
                printf("%d\t", mat[i][j]);
                puts("\n\n");
        }
        return 0;
    }

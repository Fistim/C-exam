#include <iostream> 

int main(void) 
{ 
int A[10], min, max; 
float average = 0.0, total = 0; 
for (int i = 0; i < 10; i++) 
{ 
printf("A[%i] = ", i); 
scanf("%d",&A[i]); 
} 
if (A[1] > A[0]) 
{ 
min = 0; 
max = 1; 
} 
if (A[0] > A[1]) 
{ 
min = 1; 
max = 0; 
} 
for (int i = 0; i < 10; i++) 
if (A[min] > A[i])
min = i; 
for (int i = 0; i < 10; i++) 
if (A[max] < A[i]) 
max = i; 
printf("\nMIN: A[%i] = %i\nMAX: A[%i] = %i\n", min, A[min], max, A[max]); 
for (int i = min; i < max + 1; i++) { 
total++; 
printf("\nSum: %0.2f + %i = %0.2f", average, A[i], average + A[i]); 
average += A[i]; 
} 
average = average / total; 
printf("\n\nAverage: %0.2f\n", average); 
scanf("%i", &max);  
return 0; 
}

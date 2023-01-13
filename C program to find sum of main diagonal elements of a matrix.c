39—
#include <stdio.h>
#define SIZE 3
int main()
{
int A[SIZE][SIZE];
int row, col, sum = 0;
printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
for(row=0; row<SIZE; row++)
{
for(col=0; col<SIZE; col++)
{
scanf("%d", &A[row][col]);
}
}
for(row=0; row<SIZE; row++)
{
sum = sum + A[row][row];
}
printf("\nSum of diagonal = %d", sum);
return 0;
}

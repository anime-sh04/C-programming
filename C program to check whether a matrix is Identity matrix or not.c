41—
#include <stdio.h>
#define SIZE 3
int main()
{
int A[SIZE][SIZE];
int row, col, isIdentity;
printf("Enter elements in matrix 3x3: \n");
for(row=0; row<SIZE; row++)
{
for(col=0; col<SIZE; col++)
{
scanf("%d", &A[row][col]);
}
}
isIdentity = 1;
for(row=0; row<SIZE; row++)
{
for(col=0; col<SIZE; col++)
{
if(row==col && A[row][col]!=1)
{
isIdentity = 0;
}
else if(row!=col && A[row][col]!=0)
{
isIdentity = 0;
}
}
}
if(isIdentity == 1)
{
printf("\nAn Identity Matrix.\n");
for(row=0; row<SIZE; row++)
{
for(col=0; col<SIZE; col++)
{
printf("%d ", A[row][col]);
}
printf("\n");
}
}
else
{
printf("Not Identity Matrix");
}
return 0;
}

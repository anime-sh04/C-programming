30---
#include <stdio.h>  
int getFactorial(int n);     
int main() 
{  
int row, rows, i, value;
   
printf("Enter Number of Rows:");  
scanf("%d", &rows);  
for(row = 0; row < rows; row++) 
{  
for(i = row; i <= rows; i++)  
printf("  ");  
   
for(i = 0; i <= row; i++) 
{  
value = getFactorial(row)/(getFactorial(i)*getFactorial(row-i));  
printf("%4d", value);  
}  
printf("\n");  
}  
return 0;  
} 
 
int getFactorial(int N){
if(N < 0){
printf("Invalid Input: factorial not defined for \
negative numbers\n");
return 0;
}
int nFactorial = 1, counter;
  
for(counter = 1; counter <= N; counter++){
nFactorial = nFactorial * counter;
}    
return nFactorial;
}

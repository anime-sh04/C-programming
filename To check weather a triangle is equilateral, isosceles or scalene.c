15---
#include<stdio.h>
int main(){
   int side1, side2, side3;
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);
   if(side1 == side2 && side2 == side3)
      printf("The Given Triangle is equilateral
");
   else if(side1 == side2 || side2 == side3 || side3 == side1)
      printf("The given Triangle is isosceles
");
   else
      printf("The given Triangle is scalene
");
   return 0;
}

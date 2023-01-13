17---
#include <stdio.h>

int main()
{
    int i, n;
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);

   
    for(i=1; i<=n; i++)
    {
        
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

      AND 
#include <stdio.h>

int main()
{
    int i, n, sum=0;

   
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
       
        sum += i;
    }

    printf("Sum of all even number between 1 to %d = %d", n, sum);

    return 0;
}

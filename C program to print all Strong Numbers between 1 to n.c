24---
#include <stdio.h>  
int main()  
{  
    int n;  
    int sum=0;  
    printf("Enter a number");  
    scanf("%d",&n);  
    int k=n;  
    int r;  
    while(k!=0)  
    {  
        r=k%10;  
        int f=fact(r);  
        k=k/10;  
        sum=sum+f;  
    }  
    if(sum==n)  
    {  
        printf("\nNumber is a strong");  
    }  
    else  
    {  
        printf("\nNumber is not a strong");  
    }  
    return 0;  
}  
int fact(int r)  
{  
    int mul=1;  
    for(int i=1;i<=r;i++)  
    {  
        mul=mul*i;  
    }  
    return mul;  
      
}  
In the above code, the input data is retrieved from the user, and then the data is checked whether the input data is a strong number or not.


Output

Strong number in C
Program to print the strong numbers from 1 to n.
#include<stdio.h>  
int main()  
{  
    int fact=1,sum=0;  
    int n,r;  
    printf("Enter the 'n' number");  
    scanf("%d",&n);  
    printf("\n Strong numbers are :");  
    for(int i=1;i<=n;i++)  
    {  
        int k=i;  
        while(k!=0)  
        {  
            r=k%10;  
            fact=factorial(r);  
             
          
            k=k/10;  
            sum=sum+fact;  
        }  
        if(sum==i){  
        printf("%d, ",i);  
          
           }  
           sum=0;  
    }  
      
     
    return 0;  
}  
  
 int factorial(int f)  
    {  
        int mul=1;  
        for(int i=1; i<=f;i++)  
        {  
            mul=mul*i;  
        }  
        return mul;  
    }  
Output

Strong number in C
Program to find strong numbers in a given range.
#include<stdio.h>  
int main()  
{  
    int fact=1,sum=0;  
    int n1,n2,r;  
    printf("Enter the first number");  
    scanf("%d",&n1);  
    printf("\nEnter the last number");  
    scanf("%d",&n2);  
    printf("\nStrong numbers are :");  
    for(int i=n1;i<=n2;i++)  
    {  
        int k=i;  
        while(k!=0)  
        {  
            r=k%10;  
            fact=factorial(r);  
            k=k/10;  
            sum=sum+fact;  
        }  
        if(sum==i){  
        printf("%d, ",i);  
        }  
           sum=0;  
    }  
   return 0;  
}  
int factorial(int f)  
 {  
        int mul=1;  
        for(int i=1; i<=f;i++)  
        {  
            mul=mul*i;  
        }  
        return mul;  
    }  
Output:

Strong number in C


← PrevNext →

Youtube For Videos Join Our Youtube Channel: Join Now
Feedback
Send your Feedback to feedback@javatpoint.com
Help Others, Please Share
facebook twitter pinterest

Learn Latest Tutorials
Splunk tutorial
Splunk

SPSS tutorial
SPSS

Swagger tutorial
Swagger

T-SQL tutorial
Transact-SQL

Tumblr tutorial
Tumblr

React tutorial
ReactJS

Regex tutorial
Regex

Reinforcement learning tutorial
Reinforcement Learning

R Programming tutor

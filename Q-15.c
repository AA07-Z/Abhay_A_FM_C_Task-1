#include<stdio.h>

int Fib(int n)
{
    if(n<=1)
    return n;
    else 
    {
        return Fib(n-1)+Fib(n-2);
    }
    
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<0)
    printf("Invalid input");
    else 
    {
        int result=Fib(n);
        printf("The %dth term is : %d",n,result);
    }
    return 0;
}
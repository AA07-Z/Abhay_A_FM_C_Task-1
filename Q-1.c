#include <stdio.h>
#include <math.h>
int main()
   {
    printf("Enter 3 number: ");
    int a,b,c,sum;
    scanf("%d %d %d", &a, &b, &c);
    sum = a+b+c;

    //checking if sum is 0
    if(sum==0)
      printf("Sum of 3 number is zero. It is neither even nor odd and neither prime nor composite \n");
    else {
    //checking even and odd
    if(sum%2==0)
      printf("The sum is even \n");
    else printf("The sum is odd \n");

    //checking prime and composite
    int isprime=1;
    if(sum>1)
    {
    for(int i= 2; i<= sqrt(sum);i++)
    {
        if(sum%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==0)
    printf("The sum is composite \n");
    else printf("The sum is prime \n");
    }
    else printf ("The sum is lower than 1. It can not be classified into prime and composite.");
   return 0;
    }
}
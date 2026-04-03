#include<stdio.h>
int main()
{
    printf("Enter number of elements: ");
    int n;
    scanf("%d",&n);
    int i,j,arr[100];

    if (n<2)
    {
        printf("Number of elements must be greater than 2");
        return 0;
    }

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int *ptr=arr;
    int first = *ptr;
    int second = *ptr;

    for(i=1;i<n;i++)
    {
        int current = *(ptr+i);
        if(current>first)
        {
            second = first;
            first = current;
        }
        else if (current>second && first!=current)
        second = current;
    }
    printf("The second largest number = %d", second);
return 0;
}
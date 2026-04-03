#include<stdio.h>
int main()
{
    int arr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr = arr;
    int temp;

    for(i=0; i<n-1; i=i+2)
    {

        temp = *(ptr+i);
        *(ptr+i) = *(ptr+i+1);
        *(ptr+i+1) = temp;
        
    }
    printf("The modified array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
return 0;
}
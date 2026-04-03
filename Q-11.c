#include<stdio.h>

void sort(int arr[], int n)
{
    int i, j, temp, max;

    for(i=0;i<n-1;i++)
    {
        max=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The sorted array is: \t");
    for(i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
}

int search(int arr[],int n, int x)
{
    int i, j, high=n-1, mid=(n-1)/2, low=0;
    
    mid=(high+low)/2;
    while(high>=low)
    {
        mid=low+(high-low)/2;
        if(x==arr[mid])
        {
            return mid+1;
        }
        if(x>arr[mid])
        {
            low=mid+1;
        }
        else high = mid-1;
        
    }
    return -1;
}

int main()
{
    int arr[100], i,x,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    sort(arr,n);

    printf(" \nEnter the number to be searched: ");
    scanf("%d",&x);

    int pos = search(arr,n,x);
    if(pos==-1)
    {
        printf("No match");
    }
    else printf("The element is present at position: %d",pos);

    return 0;
}
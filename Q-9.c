#include<stdio.h>
int main()
{   //getting input
    int arr[100][100],i,j,sum=0,dia=0;
    printf("Enter elements: ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    //printing the matrix
    printf("The matrix is: \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }

    //the sum
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum = sum+arr[i][j];
        }
    }
    printf("The sum = %d \n",sum);

    //sum of diagonals
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
            dia=dia+arr[i][j];
        }
    }
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i+j==3)
            dia=dia+arr[i][j];
        }
    }
    printf("The sum of diagonal elements = %d",dia);

    return 0;
}
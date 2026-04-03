#include<stdio.h>

void pattern(int n)
{
    int i, j;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        printf(" ");
        for(j=0;j<i;j++)
        printf("* ");
        printf("\n");
    }
}

int main()
{
    printf("Enter the number of rows: ");
    int n;
    scanf("%d",&n);
    pattern(n);

    return 0;
}
#include<stdio.h>
int main()
{
 int units;

 printf ("Enter the number of units: ");
 scanf("%d",&units);
 
 if (units<0 || units >350)
    printf("The number of units must be between 0 and 350");
 else if (units<101)
    printf("Electricity bill = %d",units*5);
 else if (units<301)
    printf("Electricity bill = %d",(100*5+(units-100)*8));
 else if (units<350) 
    printf("Electricity bill = %d",(100*5+200*8+(units-300)*10));
 else if (units==350)
    printf("Electricity bill = 2900");
    return 0;
}
#include<stdio.h>
int main()
    {
        int time,hr,min,sec;

        printf("Enter no. of seconds: ");
        scanf("%d",&time);
        
        if (time<0)
           {
            printf("Time has to greater than 0. \n");
           }
        else if (time<60)
            {
             printf("Time = %d seconds \n",time);
            } 
        else if (time<3600)
             {
              printf("Time = %d minutes %d seconds",min=time/60,sec=time%60);  
             }
        else {
              printf ("Time = %d hours %d minutes %d seconds",hr=time/3600,min=(time%3600)/60,sec=time%60);
             }     
    return 0;
    }

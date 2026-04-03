#include<stdio.h>
#include<string.h>
int main()
{
    char pass[100], attmpt[100];
    int i = 0;

    printf("Set the correct password: ");
    scanf("%s", pass);

    while(i < 3)
    {
        printf("Enter password: ");
        scanf("%s", attmpt);

        if(strcmp(pass, attmpt) == 0)
        {
            printf("Correct password!\n");
            break;
        }
        else
        {
            i++;
            printf("Incorrect password!\n");

        }
    }

    if(i == 3)
    {
        printf("Account locked! Too many incorrect attempts.\n");
    }

    return 0;
}
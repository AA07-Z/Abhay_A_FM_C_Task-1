#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    int n,i,v=0,c=0;

    printf("Enter the string: ");
    gets(str);

    n=strlen(str);

    for(i=0;i<n;i++)
    {   
        char ch = tolower(str[i]);

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            v++;

        else if(isalpha(ch))
            c++;
    }

    printf("Number of vowels = %d\n",v);
    printf("Number of consonants = %d\n",c);

    return 0;
}
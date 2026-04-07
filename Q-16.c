#include <stdio.h>

void compress(char str[], int index, int count)
{
    if(str[index] == '\0')   // end of string
    {
        return;
    }

    if(str[index] == str[index + 1])
    {
        compress(str, index + 1, count + 1);
    }
    else
    {
        printf("%c%d", str[index], count);
        compress(str, index + 1, 1);
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    compress(str, 0, 1);

    return 0;
}
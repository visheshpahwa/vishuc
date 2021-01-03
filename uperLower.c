#include <stdio.h>
int main()
{
    char c;
    printf("Enter character\n");
    scanf("%c", &c);

    if (c >= 65 && c <= 90)
    {
        printf("Your character is Upper Case\n");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("Your entered character is Lower case\n");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("Your entered charcter is Number\n");
    }
    else
    {
        printf("You entered a special character\n");
    }

    return 0;
}
#include <stdio.h>
void printString(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    // char str[] = {'v', 'i', 's', 'h', 'u', '\0'};
    char str[55];
    // printString(str);
    
    gets(str);
// printf("%s",str);
puts(str);
    return 0;
}
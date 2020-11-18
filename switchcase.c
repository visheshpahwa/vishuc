#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Hello");
        break;
    case 2:
        printf("Namaste");
        break;
    default:
        printf("I am still learning more");
        break;
    
    }

    return 0;
}

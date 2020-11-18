#include <stdio.h>
int main()
{
    int a;
    printf("Enter your age:\n\a");
    scanf("%d", &a);

    if (a > 18)
    {
        printf("Yes !! , you can drive");
    }
    else if (a == 18)
    {
        printf("You have to give test then you can drive");
    }
    else
    {
        printf("You can't drive");
    }

    return 0;
}

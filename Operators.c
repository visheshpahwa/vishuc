#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter number a");
    scanf("%f", &a);

    printf("Enter number b");
    scanf("%f", &b);

    printf("a+b = %f\n", a + 2);
    printf("a*b = %f\n", a * b);
    printf("a/b = %f\n", a / b);
    printf("a-b = %f\n", a - b);

    return 0;
}
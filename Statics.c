#include <stdio.h>
int func1(int b)
{
    static int myVar = 0;
    printf("The value of my Var is : %d\n", myVar);
    myVar++;
    return b + myVar;
}
int main()
{
    int b;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);

    return 0;
}
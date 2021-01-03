#include<stdio.h>
void ChangeValue(int*address){
    *address=150;
}
int main()
{
    int a=10,b=15;
    printf("The value of a is now:%d\n",a);
    ChangeValue(&a);
    printf("The value of a is now:%d\n",a);
    return 0;
}
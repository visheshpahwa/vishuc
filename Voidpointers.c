#include<stdio.h>
int main()
{
    int a=55;
    float b=8.6;
    void* ptr;
    ptr=&a;
    printf("The value of a is %d\n",*((int*)ptr));
    return 0;
}
#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int main()
{
    int i=5,j=4;
    printf("The value of a is: %d\n",sum(i,j));
    printf("The value of b is: %d\n",sub(i,j));
    
    return 0;
}
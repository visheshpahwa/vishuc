#include<stdio.h>
int main()
{
    // char a='3';
    // char* ptra=&a;
    // printf("%d\n",ptra);
    // printf("%d",ptra+1);

    int arr[]={1,2,3,4};
    printf("The value of array at 3rd position is :%d\n",arr[3]);
    printf("The adress of first element of array is:%d\n",&arr[0]);
    printf("The adress of first element of array is:%d\n",arr);
    printf("The adress of second element of array is:%d\n",&arr[1]);
    printf("The adress of second element of array is:%d\n",arr+1);
    return 0;
}
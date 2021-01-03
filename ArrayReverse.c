#include<stdio.h>
void arrayReverse(int arr[])
{
   
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,67};
    printf("\nBefore Reversing Array:\n");
     for (int i = 0; i < 7; i++)
    {
        printf("The value of %d of array is %d\n",i,arr[i]);
    }
    arrayReverse(arr);
    printf("\nAfter Reversing Array:\n");
     for (int i = 0; i < 7; i++)
    {
        printf("The value of %d of array is %d\n",i,arr[i]);
    }
    return 0;
}
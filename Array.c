#include <stdio.h>
int main()
{
    int marks[4]={5,10,15,20};
    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0] = 5;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n",i);
    //     scanf("%d",&marks[i]);
    // }
     for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n",i,marks[i]);
       
    }
    
    return 0;
}

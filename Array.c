#include <stdio.h>
int main()
{
    int marks[4];

    for (int i = 1; i <= 4; i++)
    {

        printf("Enter the value of %d student marks:\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 1; i <=4; i++)
    {
        printf("The marks of student %d is %d\n",i,marks[i]);
    }
    
    return 0;
}
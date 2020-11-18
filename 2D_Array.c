#include<stdio.h>
int main()
{   

    int marks[2][4]={{1,5,6,7},{4,5,4,5}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", marks[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}

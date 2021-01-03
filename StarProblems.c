#include <stdio.h>
void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {

        for (int j = rows; j > i; j--)
        {
            printf("*");
        }

        printf("\n");
    }
}
int main()
{
    // take input from user and asks user to choose 0 for triangular star pattern and 1 for reverse triangular star pattern

    int n,p;
    printf("Enter number of rows:\n");
    scanf("%d", &n);

   printf("Enter number i.e. 0 for triangular star pattern and 1 or reverse triangular star pattern:\n"); 

    scanf("%d", &p); 

 
 

    switch (p) 

    { 

    case 0: 

 
 

        starPattern(n); 

        break; 

    case 1: 

        reverseStarPattern(n);

        break;
 
 

    default: 

        printf("Enter 0 for triangular star pattern and 1 or reverse triangular star pattern\n"); 

        break; 

    } 
    return 0;
}
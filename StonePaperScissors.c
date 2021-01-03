#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    char name[50];
    int choice;
    printf("Enter your name:\n");
    scanf("%s", &name);
    printf("Enter your choice i.e.\n 1--> Stone\n 2--> Paper\n 3--> Scissors\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:                                //stone
        if (generateRandomNumber(3) == 0) //stone
        {
            printf("Draw\n");
        }
        else if (generateRandomNumber(3) == 1) //paper
        {
            /* code */
            printf("Computer wins\n");
        }
        else if (generateRandomNumber(3) == 2) //scissors
        {
            /* code */
            printf("%s wins\n", name);
        }

        break;
    case 2:                                // paper
        if (generateRandomNumber(3) == 0) //stone
        {
            printf("%s wins\n", name);
        }
        else if (generateRandomNumber(3) == 1) //paper
        {

            printf("Draw\n");
        }
        else if (generateRandomNumber(3) == 2) //Scissors
        {

            printf("Computer wins\n");
        }

        break;
    case 3:                                // Scissors
        if (generateRandomNumber(3) == 0) //stone
        {
            printf("Computer wins\n");
        }
        else if (generateRandomNumber(3) == 1) //paper
        {

            printf("%s wins\n", name);
        }
        else if (generateRandomNumber(3) == 2) //Scissors
        {

            printf("Draw\n");
        }
        break;

    default:
        break;
    }

    
    return 0;
}
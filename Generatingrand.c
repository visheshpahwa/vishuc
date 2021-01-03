#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generateRandomNumber(int n){
    srand(time(NULL));
    return rand()%n;
}
int main()
{
    int n;
    printf("Enter number btw which you want to generate Random Number:\n");
    scanf("%d",&n);
    printf("Rando number btw 1 to %d is: %d\n",n,generateRandomNumber(n));
    return 0;
}
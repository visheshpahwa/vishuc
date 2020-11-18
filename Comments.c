#include <stdio.h>
#define PI 3.14
int main()
{
    int a = 5;
   const float b = 6.33;
 
  //  printf("%f",PI);
 // constant --> immutable
    printf("The value of a is %d\a\n",a);
    printf("The value of b is %0.2f\a\n",b);
    /* 
    %c --> character
    %d --> integer
    %f --> decimal
    %l --> long
    %lf --> double
    %LF --> long double
    */
    return 0;
}

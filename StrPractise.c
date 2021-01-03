#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a;
    double b;
    char string[200];
    // Read and save an integer, double, and String to your variables.
    scanf("%d\n",&a);
    scanf("%lf\n",&b);
    scanf("%s",&string);
    // gets(string);
    
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n",a+i);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",b+d);
    // Concatenate and print the String variables on a new line
    puts(strcat(s,string));
    // printf("%s%s",s,string);
    // The 's' variable above should be printed first.
    
//    strcat(s, c);
    
    
    
    
    

    return 0;
}
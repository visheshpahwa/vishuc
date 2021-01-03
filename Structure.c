#include <stdio.h>
struct Student
{
    int id;
    float marks;
    char fav_char;
};

int main()
{
    struct Student vishu, mukul, mansi;
    vishu.id = 1;
    mukul.id = 2;
    mansi.id = 3;

    vishu.marks = 110;
    vishu.fav_char = 'p';
    mukul.marks = 20;
    mukul.fav_char = 'q';
    mansi.marks = 30;
    mansi.fav_char = 'r';

    printf("Vishu got %f marks\n", vishu.marks);

    return 0;
}
#include <stdio.h>
#include <string.h>
union Test
{
    int a;
    float b;
    char c;
} un;
struct Student
{
    int id;
    int marks;
    char fav_Char;
    char name[34];
};

int main()
{
    struct Student s1;
    s1.id = 1;
    s1.marks = 50;
    s1.fav_Char = 'a';
    strcpy(s1.name, "Vishu");

    printf("The id  is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The fav_Char is %c\n",s1.fav_Char);
    printf("The name is %s\n",s1.name);

    return 0;
}
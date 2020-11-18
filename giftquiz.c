#include <stdio.h>
int main()
{   char sub;
    printf("Enter subject in which you pass\n");
    printf("use folowing notations:\n1.physics->p\n2.maths->m\n3.both->b\n");
    scanf("%c", &sub);
    switch (sub)
    {
    case 'p':
        printf("You won,15 rs");
        break;
    case 'm':
        printf("You won,15 rs");
        break;
    case 'b':
        printf("You won,45 rs");
        break;
    
    default:
        printf("Use only given notations");
        break;
    }

    return 0;
}
// --> pending
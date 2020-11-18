#include <stdio.h>
int main()
{
    int i=0, age;
    /*for (i = 0; i < 10; i++)
    {
        printf( "%d\nEnter your age:\n",i);
        scanf("%d", &age);
        if (age > 10)
        {
            break;
        }
    } */
    while (i<10)
    {   printf("%d\n",i);
       i++;
      
       if (i==5)
       {
           continue;
       }
        
       printf("Vishesh\n");
       
       
    }
    

    return 0;
}

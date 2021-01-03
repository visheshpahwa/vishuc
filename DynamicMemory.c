#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of values which you want to allocate\n");
    scanf("%d", &n);
    // Use of malloc()
    // int *ptr;
    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value %d of this array\n",i);
    //       scanf("%d",&ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The %d value of this array is %d\n",i,ptr[i]);

    // }
    // int n;
    // printf("Enter the number of values which you want to allocate\n");
    // scanf("%d", &n);
    // Use of calloc()
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The %d value of this array is %d\n", i, ptr[i]);
    }
    
    // printf("Enter the number of values which you want to allocate\n");
    // scanf("%d", &n);
    // Use of realloc()
    // int n;
    printf("Enter the number of values which you want to allocate\n");
    scanf("%d", &n);
    // int *ptr;
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The %d new value of this array is %d\n", i, ptr[i]);
    }

    return 0;
}
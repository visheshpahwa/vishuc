#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value on %d is %d\n", i, array[i]);
    }
}
void func2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value on %d is %d\n", i, ptr[i]);
    }
    *(ptr + 2) = 500;
}
void func3(int Arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value on %d %d is %d\n", i, j, Arr[i][j]);
        }
    }
}

int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    // func1(arr);
    // func2(arr);
    // func2(arr);
    func3(arr);

    return 0;
}
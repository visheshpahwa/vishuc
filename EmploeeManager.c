#include<stdio.h>
#include<stdlib.h>
int main()
{
    char* ptr;
    int n;
    int i=0;
    while (i<3)
    {
    printf("Enter number of values in yo eId:\n");
    scanf("%d",&n);
    ptr=(char*)calloc(n+1,sizeof(char));
    printf("Enter youe emploee Id:\n");
    scanf("%s",ptr);
    printf("Youe eId is %s\n");
    i++;
    free(ptr);
    }
    return 0;
}
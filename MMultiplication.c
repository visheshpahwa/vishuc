#include<stdio.h>
int main()
{
    int m1,m2,n1,n2;
    printf("Enter Number or rows you want in 1st Matrix\n");
    scanf("%d",&m1);

    printf("Enter Number or Collumns you want in 1st Matrix\n");
    scanf("%d",&n1);
    
    printf("Enter Number or rows you want in 2nd Matrix\n");
    scanf("%d",&m2);
    
    printf("Enter Number or Collumns you want in 2nd Matrix\n");
    scanf("%d",&n2);

if (n1==m2)
{
    printf("Matrix Multiplication is possible\n");
}
else
{
    printf("Matrix Multiplication is not possible\n");
}





    return 0;

}
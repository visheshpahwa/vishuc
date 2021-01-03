#include<stdio.h>
int main()
{
  int a=10;
  int* p=&a;
  printf("%d\n",p);
  printf("%d",p+1);

  return 0;
}
#include<stdio.h>
int main()
{ int num;
    /* use less goto function*/
  /*  label:
       printf("We are inside label\n");
       goto end;
    goto label;
    end:
        printf("We are at end\n");   
  */
 for (int i = 0; i < 8; i++)
 {
   printf("%d\n",i);
   for (int j = 0; j < 5; j++)
   {
       printf("Enter a number, Enter 0 to exit program\n");
       scanf("%d",&num);
       if (num==0)
       {
           goto end;
       }
       
   }
   
 }end:
 
    return 0;
}

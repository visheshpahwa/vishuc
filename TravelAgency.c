#include<stdio.h>
#include<string.h>
struct Agency
{
    char name[50];
    int DLnumber;
    char Route[50];
    int Kms;
    
}n1,n2,n3;

int main()
{
    struct Agency;
    printf("Enter details of driver:\n");
    printf("Enter your name\n");
    scanf("%s",&n1.name);
    printf("Enter your DL number\n");
    scanf("%d",&n1.DLnumber);
    printf("Enter no. of kilo meters\n");
    scanf("%d",&n1.Kms);
    printf("Enter your Route\n");
    scanf("%s",&n1.Route);
   
    printf("Enter details of driver:\n");
    printf("Enter your name\n");
    scanf("%s",&n2.name);
    printf("Enter your DL number\n");
    scanf("%d",&n2.DLnumber);
    printf("Enter no. of kilo meters\n");
    scanf("%d",&n2.Kms);
    printf("Enter your Route\n");
    scanf("%s",&n2.Route);
   
    printf("Enter details of driver:\n");
    printf("Enter your name\n");
    scanf("%s",&n3.name);
    printf("Enter your DL number\n");
    scanf("%d",&n3.DLnumber);
    printf("Enter no. of kilo meters\n");
    scanf("%d",&n3.Kms);
    printf("Enter your Route\n");
    scanf("%s",&n3.Route);
  
   printf("**********Printing Drivers Information**********\n");
    
   printf("Name of First driver is %s\n",n1.name);
   printf("Number of driving license is %d\n",n1.DLnumber);
   printf("Km's driven by driver is %d\n",n1.Kms);
   printf("Route of driver is %s\n",n1.Route);
    
    
   printf("Name of second driver is %s\n",n2.name);
   printf("Number of driving license is %d\n",n2.DLnumber);
   printf("Km's driven by driver is %d\n",n2.Kms);
   printf("Route of driver is %s\n",n2.Route);
    
    
   printf("Name of third driver is %s\n",n3.name);
   printf("Number of driving license is %d\n",n3.DLnumber);
   printf("Km's driven by driver is %d\n",n3.Kms);
   printf("Route of driver is %s\n",n3.Route);
    
    return 0;
}
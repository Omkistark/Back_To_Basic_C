#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    /*
    //Method 1
    //Independant if statements
    if(a>b && a>c)
        printf("\n%d is the Greatest",a);
    if(b>a && b>c)
        printf("\n%d is the Greatest",b);
    if(c>a && c>b)
        printf("\n%d is the Greatest",c);
    */

   /*
    //Method 2
    //If else ladder
    if(a>b && a>c)
        printf("\n%d is the Greatest",a);
    if(b>a && b>c)
        printf("\n%d is the Greatest",b);
    if(c>a && c>b)
        printf("\n%d is the Greatest",c);
    */

   /*
   //Method 3
   //Nested if else
    if(a>b)
    {
        if(a>c)
            printf("\n%d is the Greatest",a);
        else
            printf("\n%d is the Greatest",c);
    }
    else// b>a
    {
        if(b>c)
            printf("\n%d is the Greatest",b);
        else
            printf("\n%d is the Greatest",c);
    }
    */

   //Method 4
   //Ternary operator
   int max = a>b ? a : b;
   max = c>max ? c : max;
   printf("\n%d is the Greatest",max);  
}
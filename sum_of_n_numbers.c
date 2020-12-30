#include<stdio.h>
#include<conio.h>
int main()
{
    int a,count,sum=0;
    printf("Enter Number of integers you want to add:\n");
    scanf("%d",&count);
    printf("Enter the numbers\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    printf("\nSum of the %d numbers is %d",count,sum);
    return 0;
}

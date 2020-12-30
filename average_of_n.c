#include<stdio.h>
int main()
{
    int count;
    float a,sum=0;
    printf("Enter number of values you want average of :\n");
    scanf("%d",&count);
    printf("Enter the numbers\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%f",&a);
        sum+=a;
    }
    float avg=sum/count;
    printf("\nAverage of the %d numbers is %f",count,avg);
    return 0;
}
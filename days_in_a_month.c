#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of the month(1-12) : ");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\n31 Days in this month!\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\n30 Days in this month!\n");
            break;
        case 2:
            printf("\n28/29 Days in this month!\n");
            break;
        default:
            printf("\nInvalid Input!\n");
    }
    return 0;
}
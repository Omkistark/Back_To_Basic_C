#include<stdio.h>
int main()
{
    int choice;
    while(1)
    {
        int a,b;
        float ans;
        printf("\nMenu:\n1-Add\n2-Subtract\n3-Multiply\n4-Division\n5-Modulo\nRemaining Integers-Exit\n->");
        scanf("%d",&choice);
        if(choice>5||choice<1)
            break;
        printf("Enter 2 numbers:\n->");
        scanf("%d%d",&a,&b);
        //If else ladder
        if (choice==1)
            ans=(a+b);
        else if (choice==2)
            ans=(a-b);
        else if (choice==3)
            ans=(a*b);
        else if (choice==4)
            ans=(a/(float)b);
        else if (choice==5)
            ans=(a%b);
        //
        printf("Answer is %f",ans);
    }
    return 0;
}
/*a
Method 2:
Replace if else ladder with following code

        switch(choice)
        {
            case 1:
                ans=a+b;
                break;
            case 2:
                ans=a-b;
                break;
            case 3:
                ans=a*b;
                break;
            case 4:
                ans=a/(float)b;
                break;
            case 5:
                ans=a%b;
                break;
        }
*/
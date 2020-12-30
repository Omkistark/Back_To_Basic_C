#include<stdio.h>
#include<math.h>
int main()
{
    int choice;
    while(1)
    {
        float a,ans;
        printf("\nMenu:\n1.floor()\t2.round()\t3.ceil()\n4.sin()\t\t5.sinh()\t6.cos()\n7.cosh()\t8.tan()\t\t9.tanh()\n10.exp()\t11.log()\t12.log10()\n13.sqrt()\t14.pow\t\t15.trunc()\nRemaining Integers-Exit\n->");
        scanf("%d",&choice);
        if(choice>15||choice<1)
            break;
        printf("Enter a numbers:\n->");
        scanf("%f",&a);
        //If else ladder
        if (choice==1)
            ans=floor(a);
        else if (choice==2)
            ans=round(a);
        else if (choice==3)
            ans=ceil(a);
        else if (choice==4)
            ans=sin(a);
        else if (choice==5)
            ans=sinh(a);
        else if (choice==6)
            ans=cos(a);
        else if (choice==7)
            ans=cosh(a);
        else if (choice==8)
            ans=tan(a);
        else if (choice==9)
            ans=tanh(a);
        else if (choice==10)
            ans=exp(a);
        else if (choice==11)
            ans=log(a);
        else if (choice==12)
            ans=log10(a);
        else if (choice==13)
            ans=sqrt(a);
        else if (choice==14)
        {
            float b;
            printf("\nEnter required power for %f\n->",a);
            scanf("%f",&b);
            ans=pow(a,b);
        }    
        else if (choice=15)
            ans=trunc(a);
        printf("Answer is %f",ans);
    }
    return 0;
}
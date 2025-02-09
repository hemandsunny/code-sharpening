#include<stdio.h>
//check leap year
void main()
{
    int a;
    printf("enter the year\n");
    scanf("%d",&a);

    if (a%400==0)
    {
        printf("%d is a leap year\n",a);
    }
    else if(a%100==0)
    {
        printf("%d is not a leap year\n",a);
    }
    else if(a%4==0)
    {
        printf("%d is a leap year\n",a);
    }
    else
    {
        printf("%d is not a leap year\n",a);
    }

}
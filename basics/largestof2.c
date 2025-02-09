#include<stdio.h>

void main()
{
    int a,b;
    printf("enter the numbers :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is the bigger number.\n",a);
    }
    else
    {
        printf("%d is the bigger number.\n",b);
    }
    return;
}
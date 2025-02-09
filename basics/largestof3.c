#include<stdio.h>

void main()
{
    int a,b,c,l=0;
    printf("enter the numbers :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b)
    {
        l=a;
    }
    else
    {
        l=b;
    }
    if(l<c)
    {
        l=c;
    }
    printf("%d is the largest.\n",l);
    return;
}
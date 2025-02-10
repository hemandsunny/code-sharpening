#include<stdio.h>

void main()
{
    int a,b,i;
    printf("number of the multiplication table : ");
    scanf("%d",&a);
    printf("upto which number ? : ");
    scanf("%d",&b);
    
    for(i=1;i<=b;i++)
    {
        int c=a*i;
        printf("%d x %d = %d\n",a,i,c);
    }
    return;
}
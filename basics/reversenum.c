#include <stdio.h>
//reverse number
void main()
{
    int a,temp=0,n;
    printf("enter a number : ");
    scanf("%d",&a);
    while(a!=0)
    {
        printf("a-mod-10 = %d temp =  %d\n",a%10,temp);
        //temp+=(temp*10)+(a%10);
        temp=(temp*10+(a%10));
        a=a/10;
        
    }
    printf("reversed num = %d\n",temp);
    return;
}
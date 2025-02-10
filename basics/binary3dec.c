#include<stdio.h>
#include<math.h>
//binary to decimal

int main()
{
    int a,x,i;double decf=0.0;
    printf("enter the binary : ");
    scanf("%d",&a);
    x=a;
    i=0;
    while(x!=0)
    {
        int rem = x%10;
        decf = decf + rem*pow(2,i);
        i++;
        x=x/10;
    }
    printf("decimal of %d = %.1f\n",a,decf);
}
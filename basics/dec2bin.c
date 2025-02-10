#include<stdio.h>
// convert decimal to binary

void main()
{
    int a,x,i=0;int ar[32];
    printf("enter a number : ");
    scanf("%d",&a);
    x=a;
    if(x==0)
    {
        printf("%d",0);
    }
    while(x!=0)
    {
        int rem=x%2;
        ar[i]=rem;
        x=x/2;
        i++;

    }
    printf("result : \n");
    //printf("%d\n",ar[0]);
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",ar[j]);
    }
}

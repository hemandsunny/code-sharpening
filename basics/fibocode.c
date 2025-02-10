#include<stdio.h>
//print fibonacci number

void main()
{
    int n,i,a=0,b=1,fiboElement;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("result : \n");
    
    for(i=0;i<n;i++)
    {
        if (i==0)
        {
            printf("%d\n",a);
        }
        else if(i==1)
        {
            printf("%d\n",b);
        }
        else
        {
            fiboElement=a+b;
        printf("%d\n",fiboElement);
        a=b;
        b=fiboElement;
        }
        
    }
}


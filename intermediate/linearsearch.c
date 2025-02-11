#include<stdio.h>

//linear search

int main()
{
    int ar[]={5,1,4,3,2,7,6,9,8,0},x;
    printf("enter the number to be found\n");
    scanf("%d",&x);
    for(int i=0;i<10;i++)
    {
        if (x==ar[i])
        {
            printf("%d is found\n",x);
            return 0;
        }
        
    }
    printf("%d is not found\n",x);
}
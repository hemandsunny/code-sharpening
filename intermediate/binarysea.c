#include<stdio.h>
//binary search

int main()
{
    int ar[]={0,1,2,3,4,5,6,7,8,9},x;
    int low=0,high=10,mid;
    printf("enter a number\n");
    scanf("%d",&x);

    while(low<=high)
    {
        mid=(low+high)/2;
        if (ar[mid]==x)
        {
            printf("%d found\n",x);
            return 0;
        }
        else if(ar[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("%d not found\n",x);
    return 0;
}
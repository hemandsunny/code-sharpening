#include<stdio.h>
//find largest and smallest in array

int main()
{
    int ar[]={0,1,2,6,4,5,3,9,8,7};
    int i=0;
    int max=ar[0],min=ar[0];
    for(i=0;i<10;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
        if(ar[i]<min)
        {
            min=ar[i];
        }
        
    }
    printf("Largest array element = %d\n",max);
    printf("Smallest array element = %d\n",min);
    

}
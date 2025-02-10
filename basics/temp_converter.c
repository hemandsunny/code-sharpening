#include<stdio.h>
//temperature converter
void main()
{
    int n,a,b;float c,result1,result2;
    printf("1.celsius\n");
    printf("2.fahrenheit\n");
    printf("3.kelvin\n");
    printf("enter the no for input unit : ");
    scanf("%d",&a);
    printf("enter the input value : ");
    scanf("%f",&c);

    
    if(a==1)
    {
            result1=((c*9.0/5.0))+32;
            result2=c+273.15;
            printf("fahrenheit = %.2f\n",result1);
            printf("kelvin = %.2f\n",result2);
            
    }
    else if(a==2)
    {
        
            result1=(c-32)*(5.0/9.0);
            result2=result1+273.15;
            printf("celsius = %.2f\n",result1);
            printf("kelvin = %.2f\n",result2);
            
    }
    else if(a==3)
    {
        
            result1=c-273.15;
            result2=(result1*(9.0/5.0))+32;
            printf("celsius = %.2f\n",result1);
            printf("fahrenheit = %.2f\n",result2);
            
    }
    else
    {
        printf("invlaid input \n");
    }
}
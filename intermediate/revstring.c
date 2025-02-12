#include<stdio.h>
#include<string.h>
//reverse a string
int manualOPS(char str1[]);
int usingStringh(char str[],int l);

int main()
{
    char input_str[100];
    int length;
    printf("enter a string : ");
    scanf("%99s",&input_str);
    length=strlen(input_str);
    usingStringh(input_str,length);
    
    manualOPS(input_str);
}

int usingStringh(char str[],int l)
{
    int start=0,end=l-1;
    char temp;

    while(start<end)
    {
        temp = str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf("1. %s\n",str);
    return 0;
}

int manualOPS(char str1[])
{
    int l=0,start=0,end;char temp;
    while(str1[l]!='\0')
    {
        l++;
    }
    end=l-1;
    while(start<end)
    {
        temp = str1[start];
        str1[start]=str1[end];
        str1[end]=temp;
        start++;
        end--;
    }
    printf("2. %s\n",str1);
    return 0;


}
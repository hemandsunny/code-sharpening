#include <stdio.h>
//hackerrank - playing with characters
int main() 
{
       char ch; char s[100],sen[100];
       scanf("%c\n",&ch);
       scanf("%99s\n",&s);
       scanf("%99[^\n]%*c\n",&sen);
       printf("%c\n",ch);
       printf("%s\n",s);
       printf("%s\n",sen);
    return 0;
}

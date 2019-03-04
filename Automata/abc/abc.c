#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[30];
    int ea=0,ob=0,ec=0,i;

    printf("enter the string\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='b'||s[i]=='c')
        {
             if(s[i]=='a')
            ea++;
        else if(s[i]=='b')
            ob++;
        else if(s[i]=='c')
            ec++;
        }
        else
            goto l;


    }
    if(ea%2==0&&ob%2!=0&&ec%2==0)
        printf("string accepted\n");
    else
        l:

        printf("invalid string");
          getch();
}

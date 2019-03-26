#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[30];
    int ea=0,eb=0,i;

    printf("enter the string\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='b')
        {
             if(s[i]=='a')
            ea++;
        else if(s[i]=='b')
            eb++;
        }
        else
            goto l;


    }
    if(ea%2==0&&eb%2==0)
        printf("string accepted\n");
    else
        l:

        printf("invalid string");
          getch();
}

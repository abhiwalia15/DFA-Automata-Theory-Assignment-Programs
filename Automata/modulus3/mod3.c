#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[30];
    int j,c=0;

    printf("enter the string\n");
    gets(s);
    for(j=0;j<strlen(s);j++)
    {
       if(s[j]=='1'||s[j]=='0')
       {
           c++;
       }
    else
        goto l;

    }


        if(c%3==0)
            printf("accepted");
        else
            l:
                printf("invalid");
    getch();
}


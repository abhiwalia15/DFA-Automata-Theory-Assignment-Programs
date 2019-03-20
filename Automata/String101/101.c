#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[30];
    int j,i;

    printf("enter the string\n");
    gets(s);
    i=strlen(s)-1;
    for(j=0;j<strlen(s);j++)
    {
       if(s[j]=='1'||s[j]=='0');
    else
        goto l;

    }

        if(s[i]=='1'&&s[i-1]=='0'&&s[i-2]=='1')
            printf("accepted");
        else
            l:
                printf("invalid");
    getch();
}


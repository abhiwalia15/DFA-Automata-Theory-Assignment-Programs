#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char s[30];
    int j,i,k;

    printf("enter the string\n");
    gets(s);
    i=strlen(s)-1;
    k=0;
    for(j=0;j<strlen(s);j++)
    {
       if(s[j]=='1'||s[j]=='0');
    else
        goto l;

    }

        if((s[i]=='0'&&s[i-1]=='1')||(s[k]=='0'&&s[k+1]=='1'))

            printf("accepted");
        else
            l:
                printf("invalid");
    getch();
}


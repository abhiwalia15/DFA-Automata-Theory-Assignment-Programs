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
       if(s[j]=='a'||s[j]=='b');
    else
        goto l;

    }

        if(s[i]=='b'&&s[i-1]=='a'&&s[i-2]=='b')
            printf("accepted");
        else
            l:
                printf("invalid");
    getch();
}


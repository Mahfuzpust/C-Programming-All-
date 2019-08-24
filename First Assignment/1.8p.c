#include<stdio.h>
int main()
{
    char a[40];
    char b[40];

    printf("Enter your Name :");
    gets(a);

    int i,len=0,j;
    i=0;
    while(a[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    //for(j=len-1;j>=0;j--)

    {
        b[j] = a[i];
    }

    b[j] = '\0';

    printf("Strings = %s\n",a);
    printf("Strings = %s\n",b);

    int d= strcmp(a,b);

    if(d==0)
    {
        printf("string is palindrome");

    }
    else
    {
       printf("string is not palindrome");
    }
    getch();

}


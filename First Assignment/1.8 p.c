#include<stdio.h>
#include<string.h>
int main()
{
    char a[40];
    char b[40];

    printf("Enter name :");
    gets(a);

    int i,j,len=0,m;

    i=0;
    while(a[i]!='\0')
    {
        i++;
        len++;
    }

    for(j=len-1;j>=0;j--)
    {
        printf("%c",a[j]);



    }
    printf("\n");



    m=strcmp(a,b);


    if(m==0)


    {
        printf(" Number is palindrome");
    }
    else
        {
             printf("Number is not palindrome");

    }
}

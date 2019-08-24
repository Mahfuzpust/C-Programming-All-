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

   for(j=len-1;j>=0;j--)
   {
       printf("%c",a[j]);
   }

}

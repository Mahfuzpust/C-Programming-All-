#include<stdio.h>
int main()
{
    char a[100];
    char b[100];
    int i;
    printf(" 1st ");
    gets(a);
     printf(" 2nd ");
    gets(b);


    i=0;
    while(a[i]==b[i] &&a[i]=='\0');
    {
        i++;
    }

   if(a[i] == b[i])
   {
       printf(" a is equal b");
   }
   else
    {
    printf(" a is not equal b");
   }


}

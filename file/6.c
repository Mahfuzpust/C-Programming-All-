#include<stdio.h>
int main()
{
     char x[1000];
     char y[1000];
       FILE  *fp;
       printf("enter the file name : ");
       gets(x);
       printf("want you write in file : ");
       gets(y);
       fp=fopen(x,"w");

       fprintf(fp,"%s",y);
    fclose(fp);
    return 0;
}

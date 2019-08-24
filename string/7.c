#include<stdio.h>
int main()
{
char x[100];
char *p;
p=&x;
int i,n=0;
gets(x);
for(i=0;p[i]!='\0';i++)
{
    n++;
}
printf("%d",n);
return 0;
}

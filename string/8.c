#include<stdio.h>
int main()
{
    char x[1000];
    int i,j=0,k,m,n=0;
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        n++;
    }
    printf("%c",x[0]);
    for(i=0;i<n;i++)
    {
        if(x[i]==' ')
        {
         x[j]=x[i+1];
         j++;
        }

    }
    x[j]='\0';
    printf("%s",x);

    return 0;
}

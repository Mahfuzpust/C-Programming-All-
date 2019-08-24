#include<stdio.h>
int main()
{
    char a[50]="My Name is ";
    char b[70]="Mahfuz";
    int i,len=0,j=0;
    i=0;
    while(a[i]!=0)
    {
        i++;
        len++;
    }

    while(b[j]!=0)
    {
        a[len+j]= b[j];
        j++;
    }
    printf("%s",a);
}



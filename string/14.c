#include<stdio.h>
int main()
{
    char a[100];
    char b[100];
    int i;

    printf("Enter the any name: ");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
      b[i] = a[i];

    }
     b[i] = '\0';
    printf(" The string copy is:%s",b);
}

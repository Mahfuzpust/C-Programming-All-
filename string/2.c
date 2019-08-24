#include<stdio.h>
#include<string.h>
int main()
{
    char m[200];
    printf("Enter the lower case:");
    gets(m);

    printf("The upper case is : ");

    int b = strupr(m);
    printf("%s\n",b);
}

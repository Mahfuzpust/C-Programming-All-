#include<stdio.h>
#include<string.h>
int main()
{
    char m[200];
    printf("Enter the upper case:");
    gets(m);

    printf("The lower case is : ");
    int b = strlwr(m);


    printf("%s\n",b);
}

#include <stdio.h>

int main()
{
char x[1000],y[1000];
printf("1st string : ");
gets(x);
printf("2nd string : ");
gets(y);
    char *a = x;
    char *b = y;
    while(*a!=0)
    {
        a++;
    }
    while(*b!=0)
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';
    printf("\nThe string after concatenation is: %s \n", x);
    return 0;
}

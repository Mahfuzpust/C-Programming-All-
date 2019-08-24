#include<stdio.h>
int reverse();
int main()
{

    printf("Enter sentence :");
    reverse();

    return 0;
}
int reverse()
{
    char ch;
    scanf("%c",&ch);
    if(ch !='\n')
    {
        reverse();
        printf("%c",ch);
    }
}

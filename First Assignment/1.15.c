#include<stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp=fopen(__FILE__,"r");
    do
    {
        ch=getc(fp);
        putchar(ch);
    }
    while(ch!=EOF);
    fclose(fp);
    return 0;
}

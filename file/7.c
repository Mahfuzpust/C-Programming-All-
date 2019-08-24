#include<stdio.h>
int main()
{

    char x[1000]="my name is mahfuz";
    FILE *fp;

    fp=fopen("FILE7.txt","r");
    fscanf(fp,"%[^\n]",x);
    printf("%s",x);

    fclose(fp);
    return 0;
}

#include<stdio.h>
int main()
{
FILE *fp;
char x[1000];
int n;
fp=fopen("FILE 10.txt","w");
gets(x);
fprintf(fp,"%s",x);
if(fp==0)
{
    printf("file does  not open");
    exit(1);
}
fseek(fp,0,SEEK_END);
n=ftell(fp);
printf(" size = %d",n);
fclose(fp);
return 0;
}


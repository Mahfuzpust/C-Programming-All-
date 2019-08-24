#include<stdio.h>
int main()
{
FILE *fp,*fp1;
char x[1000];
int n;
fp=fopen("FILE 14.txt","w");
fp1=fopen("E:\\file 14.txt","w");
gets(x);
fprintf(fp,"%s",x);

fseek(fp,0,SEEK_END);
n=ftell(fp);
printf(" size = %d",n);
fprintf(fp1,"size=%d",n);
fclose(fp);
return 0;
}

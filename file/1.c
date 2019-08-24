#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("Riya.txt","w");
fprintf(fp,"my name is mahfuz");
fclose(fp);
return 0;

}

#include<stdio.h>
int main()
{
    char x[1000];
   // printf("how you write: ");
   // gets(x);

    FILE *fp,*fp1,*fp2;

   // fp=fopen("mahfuz.txt","w");

    fp1=fopen("khan.txt","r");
    fp2=fopen("riya.txt","w");

    printf("how you write: ");
    gets(x);

    fscanf(fp1,"%s",x);
    fprintf(fp2,"%s",x);
    fclose(fp1);
    fclose(fp2);
    return 0;

}

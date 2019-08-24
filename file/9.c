 #include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fp1,*fp2;
    char x[100],y[100],z[100],c;
    printf("1st file: ");
    gets(x);
    printf("2nd file: ");
    gets(y);

    fp=fopen("FILE9.1.txt","r");
    fprintf(fp,"mahfuz");
    fp1=fopen("FILE9.2.txt","r");
    fprintf(fp1,"rahman");
    fp2=fopen("FILE9.3.txt","w");


    if((fp==0) || (fp1==0) || (fp2==0))
    {
        printf("file is not open");
        exit(1);
    }
    while((c=fgetc(fp))!=EOF);
    {
        fputc(c,fp2);
    }

    while((c=fgetc(fp1))!=EOF);
    {
        fputc(c,fp2);
    }
    printf("file concanetat successfully %s",z);
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    return 0;

}


#include<stdio.h>
int main()
{
    FILE *b,*a,*c;
    char x[190];
    printf("Enter value : ");
    gets(x);
    b=fopen("m.txt","w");
    fprintf(b,"%s",x);
    a=fopen("mira.txt","r");
    c=fopen("jannat.txt","w");
    fscanf(a,"%s",x);
    fprintf(c,"%s",x);
    close(a);
    close(c);
   fclose(b);

}

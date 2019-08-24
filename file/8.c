 #include<stdio.h>
int main()
{
     char x[1000];
   int y[1000],n,i;
       FILE  *fp;
       printf("enter the file name : ");
       gets(x);
       printf("how much number : ");
       scanf("%d",&n);
printf("any number press for exit: \n");
       printf("want you write in file : ");
       for(i=0;i<n;i++)
       {
       scanf("%d ",&y[i]);
       }

       fp=fopen(x,"w");
       for(i=0;i<n;i++)
       {
           fprintf(fp,"%d",y[i]);
       }


    fclose(fp);
    return 0;
}

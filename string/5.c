 #include<stdio.h>
int main()
{
char x[1000];
int i,n=0,j,m;
printf("enter the string : ");
gets(x);
printf("\nBefor sort : %s",x);
for(i=0;x[i]!='\0';i++)
{
    n++;
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
     if(x[i]>x[j])
     {
         m=x[i];
         x[i]=x[j];
         x[j]=m;
     }
 }

}
printf("\nafter sort: ");

 printf("%s",x);


return 0;
}

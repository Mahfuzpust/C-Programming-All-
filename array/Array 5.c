#include<stdio.h>
int main()
{
int x[100],i,j,n,m;
printf("how much numbe : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("number %d: ",i+1);
scanf("%d",&x[i]);
}
printf("delete number : ");
scanf("%d",&m);


for(i=0;i<n;i++)
{
  if(x[i]==x[m-1])
  {
      for(j=i;j<n;j++)
      {
          x[j]=x[j+1];
      }
     n--;
  }
}
printf("after delete the numbers : ");
for(i=0;i<n;i++)
{
    printf("%d  ",x[i]);
}






return 0;
}

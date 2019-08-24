#include<stdio.h>
int main()
{
    int a[90];
    int i,n,max1,max2;

    printf("How number is input :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max1)
        {
            max1=a[i];
        }
    }
    max2=a[0];
    for(i=1;i<n;i++)

    {
      if(max1>a[i] && max2<a[i])
      {
          max2=a[i];
      }
    }


    printf("Tne second maximum number is: %d",max2);


}

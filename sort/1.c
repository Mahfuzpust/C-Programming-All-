#include<stdio.h>
int main()
{
    int a[5];
    int n,j,i,m;

    printf(" Enter the number: ");
    scanf("%d",&n);
printf("Enter the element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j] > a[j+1])
            {
                m = a[j];
                a[j] = a[j+1];
                a[j+1] = m;
            }
        }
    }
    printf(" bubble sort is: ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

    }

}

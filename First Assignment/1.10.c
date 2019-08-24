#include<stdio.h>
int main()
{
    int i,n,j,result=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {


            result=result+1;

            printf(" %d ",result);

        }
        printf("\n");

    }
    return 0;
}

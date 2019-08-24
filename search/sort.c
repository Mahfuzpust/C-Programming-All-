#include<stdio.h>
int main()
{
    int m,i,j,n;
    printf("How Number given input :");
    scanf("%d",&n);

    int mahfuz[n];
    printf(" Enter the Number : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&mahfuz[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(mahfuz[i] > mahfuz[j])
            {
                m=mahfuz[i];
                mahfuz[i]=mahfuz[j];
                mahfuz[j]=m;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf(" %d ",mahfuz[i]);
    }
    return 0;

}

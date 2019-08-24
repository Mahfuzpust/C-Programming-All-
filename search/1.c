#include <stdio.h>
int main()
{
    int x[100],i,n,m;
    printf("how much number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("searching number : ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(x[i]==m)
        {
            printf("%d is exist and position %d",m,i+1);
            exit(1);
        }
    }
        printf("%d is not exist",m);
    return 0;

}

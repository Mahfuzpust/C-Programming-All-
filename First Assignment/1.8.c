#include<stdio.h>
int main()
{
    int first=0,second=1,m,n,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
         printf(" %d",first);
        m = first + second;
        first = second;
        second = m;

    }

    return 0;
}

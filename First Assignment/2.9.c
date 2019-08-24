#include <stdio.h>
int main()
{
    int i, j, n,sum=1;
    scanf("%d", &n);

    printf("prime factor of %d: \n", n);
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                	sum=0;
                }
            }
                if(sum==1)
                {
                printf("%d\n", i);
        }
        }
        }
    return 0;
}
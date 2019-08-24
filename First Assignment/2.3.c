#include<stdio.h>
int main()
{
    int i,pow,num,a=1;
    scanf("%d%d",&pow,&num);
    for(i=1;i<=pow;i++)
    {
        a=a*num;
    }
    printf("%d",a);

    return 0;
}

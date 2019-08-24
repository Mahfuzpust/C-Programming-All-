#include<stdio.h>
int main()
{
    int n,res;
    printf("enter the number = ");
    scanf("%d",&n);
    res=revarse(n);
    printf("number is :",res);
    return 0;
}
int r,sum=0;
int revarse(int n)
{
    if(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        revarse(n/10);
    }
    else
        return sum;
}

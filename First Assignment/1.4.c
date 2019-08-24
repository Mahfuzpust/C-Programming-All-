#include<stdio.h>
int main()
{
    int num,i,r,sum=0,a,fact;
    scanf("%d",&num);
    a=num;
    while(num>0)
    {
fact=1;
        r=num%10;


        for(i=1;i<=r;i++)
    {
        fact=fact*i;

    }
    sum=sum+fact;
    num=num/10;
    }
    if(sum==a)
        printf( "number is strong",a);
        else
            printf("number is not strong",a);

        return 0;

}

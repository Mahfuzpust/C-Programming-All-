#include<stdio.h>
int main()
{
    int i,num,r,sum=0;
    scanf("%d",&num);
    for(i=1;num>=10;i++)
    {
        r=num%10;
        sum=sum+r;
        sum=sum*10;
        num=num/10;


    }
    sum=sum+num;
    printf("%d",sum);
    return 0;

}

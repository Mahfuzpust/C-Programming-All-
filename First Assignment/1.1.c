#include<stdio.h>
int main()
{
    int num,i,sum=0;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
    if(num==sum)
    {
        printf("this is perfect number",num);
    }
    else
    {
        printf("this is not perfect number ",num);
    }
    return 0;
}


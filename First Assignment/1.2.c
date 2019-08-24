#include<stdio.h>
#include<math.h>
int main()
{
    int num,r,a,sum=0,b=0;
    scanf("%d",&num);
     a=num;
    while(num!=0)

    {
        r=num%10;
        sum=sum+pow(r,b);
        num=num/10;

    }
    if(a==sum)

        printf("the number is armstrong",num);

    else

        printf("the number is not armstrong",num);

    return 0;
}

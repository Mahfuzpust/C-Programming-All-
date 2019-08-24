#include<stdio.h>
int main()
{
    double a,b,c,y,x,z;
    scanf("%d%d%d",&a,&b,&c);
    x=sqrt(b*b-4*a*c);

    y=-b+x/2*a;
    z=-b-x/2*a;

    printf("%lf",y);
    printf("%lf",z);
    return 0;
}

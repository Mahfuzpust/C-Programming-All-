#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
        printf("largest number is:%d",a);
    else if((b>c)&&(b>a))
        printf("largest number is:%d",b);
    else if((c>a)&&(c>b))
        printf("largest number is:%d",c);
    return 0;
}

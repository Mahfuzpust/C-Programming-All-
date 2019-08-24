#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("swappig %d\n",a);
    printf("swappig %d\n",b);


    return 0;
}

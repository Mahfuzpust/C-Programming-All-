#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf ("swapping %d\n",a);
    printf("swapping %d\n",b);

    return 0;
}

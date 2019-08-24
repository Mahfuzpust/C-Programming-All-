#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a-b>0&&a-c>0)
        printf("largest number is:%d",a);
    else if(b-c>0&&b-a>0)
        printf("largest number is:%d",b);
        else if(c-a&&c-b>0)
            printf("largest number is :%d",c);
        return 0;

}

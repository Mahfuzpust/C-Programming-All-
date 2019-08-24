#include<stdio.h>
int square(int a);
int main()
{
    int num;
    scanf("%d",&num);
    int result = square(num);
    printf(" square is : %d",result);
    return 0;
}

int square(int a)
{
    //int r;
    int r=a*a;
    return r;
}

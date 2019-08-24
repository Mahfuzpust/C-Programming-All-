#include<stdio.h>
int fact(int a);
int main()
{
    int n;
    scanf("%d",&n);
    int m = fact(n);
    printf("Factorial numder is: %d",m);
    return 0;

}

int fact(int a)
{
    int h;
    if(a==1)
    {
        return 1;
    }
    else
        h = a * fact(a-1);
    return h;
}

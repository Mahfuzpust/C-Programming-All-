#include <stdio.h>

int power(int n1, int n2);

int main()
{
    int num, pow, result;

    printf("Enter  number: ");
    scanf("%d",&num);

    printf("Enter power number: ");
    scanf("%d",&pow);

    result = power(num, pow);

    printf("%d", result);
    return 0;
}

int power(int n1, int n2)
{
    if (n2 != 0)
        return (n1*power(n1, n2-1));
    else
        return 1;
}

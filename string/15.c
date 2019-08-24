#include<stdio.h>
int main()
{
    char a[100];
    int i;

    printf("Enter the value :");
    scanf("%s",&a);

    printf(" ASCII value :");

    i=0;
    while(a[i]!='\0')
    {
        printf("%d\n",a[i]);
        i++;
    }
}

#include<stdio.h>
int main()
{
    int a[100],large,small,i,n;
    printf("How many element ");
    scanf("%d",&n);
    printf(" Enter the number large and small number:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    large=small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i] > large)
        large = a[i];
        if(a[i] < small)
        small = a[i];
    }
    printf(" The largest number is: %d\n",large);
    printf(" The smallest number is :%d\n",small);
    return 0;
}

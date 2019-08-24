#include<stdio.h>
int main()
{
    int a[5],i,large;
    printf("Enter the numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        large=a[0];
        if(a[i] > large)
            large = a[i];
    }
    printf(" The largeast number is : %d",large);

    return 0;
}

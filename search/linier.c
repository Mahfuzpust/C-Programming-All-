#include<stdio.h>
int main()
{
    int i,n,value,position=0;
    printf("How number you given input :");
    scanf("%d",&n);
    int array[n];
    printf(" How position you want to see the number : ");
    scanf("%d",&value);

    printf("Your Number : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]==value)
        {
            position=i+1;

        }
    }
    if(position==0)
    {
        printf(" Number Not Found");
    }
    else
    {
        printf("Number is Fount \n The Found Number position %d :",position);
    }
}

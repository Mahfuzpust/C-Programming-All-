#include<stdio.h>
int main()
{
    int i,num;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("number is not prime");
       break;
        }
    }
    if(i==i);
       {
       printf("number is prime");
       }

       return 0;
}

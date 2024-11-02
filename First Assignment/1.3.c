#include<stdio.h>
int main()
{
    int i,num, flag = 0;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag = 1;
           break;
        }
    }

    if(flag == 0)
       {
          printf("number is prime");
       }
    else{
        printf("number is not prime");
       }

       return 0;
}

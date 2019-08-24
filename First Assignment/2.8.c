
#include<stdio.h>
int main()
{
	int i,n,r,sum=0,sum1=0;
	scanf("%d",&n);
	for(i=1;n>=1;i++)
	{
		r=n%10;

		n=n/10;
		sum=sum+r;
		}
		if(sum<10)
		{
		printf("generic root of number is %d\n",sum);
		}
		if(sum>9)
		{
			for(i=1;sum>0;i++)
			{
			r=sum%10;
			sum=sum/10;
			sum1=sum1+r;
			}
			printf("generic root of number is=%d",sum1);
		}
return 0;
}

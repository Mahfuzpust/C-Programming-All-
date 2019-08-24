#include<stdio.h>
int main()
{
	int x,y,z,r,i,sum;
	printf("largest number is:");
	scanf("%d",&x);
	printf("lower number is :");
	scanf("%d",&y);
	z=x/y;
	r=x%y;
	for(i=0;i<z;i++)
	{
		sum=i*y;
	}
	printf("substraction of two number=%d",sum+r);
	return 0;
}
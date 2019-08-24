#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],i,n;

	printf("Enter the number : ");
	scanf("%d",&n);

	printf("Enter First array:");
	for (i=0;i<n;i++){
	  scanf("%d",&a[i]);}

	printf("Enter Second array:");
	for (i=0;i<n;i++){
      scanf("%d",&b[i]);}

	for (i=0;i<n;i++) {

		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	printf("\nArrays after swapping");

	printf("\nFirst array :");
	for (i=0;i<n;i++)
        {
		printf("%d",a[i]);
	}

	printf("\nSecond array :");
	for (i=0;i<n;i++) {
		printf("%d",b[i]);
	}
	return 0;
}

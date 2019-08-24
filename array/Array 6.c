#include <stdio.h>

int main()
{
   int a[100], position, i, n, m;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter elements\n");

   for(i=0;i<n;i++)
      scanf("%d", &a[i]);

   printf("Enter the location where insert\n");
   scanf("%d", &position);

   printf("Enter the insert\n");
   scanf("%d", &m);

   for(i=n-1;i>=position-1;i--)

      a[i+1] = a[i];

   a[position-1] = m;

   printf("Result in array is\n");

   for(i=0;i<=n;i++)
      printf("%d\n",a[i]);

   return 0;
}

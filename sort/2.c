#include<stdio.h>
int main(){

   int a[50];
   int i, j, n, temp;

   printf("How many numbers use: ");
   scanf("%d",&n);

   printf("Enter elements: ");

   for(i=0;i<n;i++)
      scanf("%d",&a[i]);


   for(i=1;i<n;i++){
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0)){
         a[j+1]=a[j];
         j=j-1;
      }
      a[j+1]=temp;
   }

   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);

   return 0;
}

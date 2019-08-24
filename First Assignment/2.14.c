#include <stdio.h>

int main()
{
  int i,num,n,large;
  printf("How many numbers: ");
  scanf("%d",&n);

  for(i=0; i<n; i++)
  {
    printf("Enter number :");
    scanf("%d",&num);
    if(num>large)
    large=num;
  }
  printf("\n\nThe Largest Number is %d",large);


  return 0;
}

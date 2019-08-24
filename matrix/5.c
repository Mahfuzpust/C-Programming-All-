
#include<stdio.h>
int main()
{
    int i,j;
    int rows,cols;
    int A[10][10],transpose[10][10];

    printf("Enter the number rows and cols for the matrix:");
    scanf("%d%d",&rows,&cols);

    printf("Enter element for A matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    printf("A = ");
     for(i=0;i<rows;i++)
    {
         printf("\t");
        for(j=0;j<cols;j++)
        {

            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }

for (i = 0; i < rows; i++)
      for( j = 0 ; j < cols ; j++ )
         transpose[j][i] = A[i][j];

   printf("Transpose of the matrix:\n");

   for (i = 0; i < rows; i++)
    {
       printf("\t");
      for (j = 0; j < cols; j++)
      {
         printf("%d", transpose[i][j]);
         printf("\n");
   }
    }

   return 0;
}


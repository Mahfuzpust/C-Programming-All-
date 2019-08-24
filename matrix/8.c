#include<stdio.h>
int main()
{
    int i,j,rows,cols,lowersum=0;
    int A[10][10];


    printf(" Enter the number rows and cols the matrix:");
    scanf("%d%d",&rows,&cols);

    printf("Enter the element of A matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("A[%d][%d] = ",i,j);
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

    printf("lower traingle element :");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(i>j)
            {
            lowersum = lowersum + A[i][j];
            }
        }
    }
        printf("The lower sum is:%d\n",lowersum);

}


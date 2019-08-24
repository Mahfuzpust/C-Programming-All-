#include<stdio.h>
int main()
{
    int i,j;
    int rows,cols,num;
    int A[10][10];
    printf("Enter the number rows and cols :");
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

            printf("% d ",A[i][j]);
        }
        printf("\n");
    }

    printf(" Enter the any number of A matrix:  ");
    scanf("%d",&num);

     for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            A[i][j] = num * A[i][j];
        }
    }

     printf("scalar multiple matrix:  = ");
     for(i=0;i<rows;i++)
    {
        printf("\t");
        for(j=0;j<cols;j++)
        {

            printf("% d ",A[i][j]);
        }
        printf("\n");
    }
}

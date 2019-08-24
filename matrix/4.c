#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int rows,cols;
    int A[10][10],B[10][10];
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

            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
     printf("diagonal element");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(i==j)
            {
                printf(" %d ",A[i][j]);
                sum=sum + A[i][j];
            }
        }
    }
    printf("\nsum of diagonal element: %d",sum);
}

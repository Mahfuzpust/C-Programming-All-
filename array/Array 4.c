#include<stdio.h>
int main()
{
    int a[10];
    int n;
    int i, j, k;


    printf("Enter the array : ");
    scanf("%d", &n);


    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }



    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {

            if(a[i] == a[j])
            {

                for(k=j; k<n; k++)
                {
                    a[k] = a[k + 1];
                }


                n--;


                j--;
            }
        }
    }

    printf("\nArray elements deleting duplicates : ");
    for(i=0; i<n; i++)
    {
        printf(" %d ", a[i]);
    }

    return 0;
}


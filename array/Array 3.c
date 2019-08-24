#include<stdio.h>
int main()
{
    int n,i,sm1,sm2;
    printf("How you number you input: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter  number : ");
    for(i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    sm1=num[0];
    for(i=1;i<n;i++){
        if(sm1>num[i]){
            sm1=num[i];
        }
    }
    sm2=num[0];
    for(i=1;i<n;i++){
        if(sm2>num[i] && num[i]>sm1){
            sm2=num[i];
        }
    }
    printf("Second Smallest number is : %d", sm2);
    return 0;
}




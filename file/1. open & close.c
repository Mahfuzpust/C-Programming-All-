#include<stdio.h>
int main()
{
    FILE *file;
    char a[50];
    int age;


    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        printf("file is open\n");

        printf(" Enter your name: ");
        gets(a);

         printf(" Enter your age: ");
         scanf("%d",&age);

         fprintf(file,"Name =%s, Age = %d\n",a,age);


        printf("file is nsuccessfully");
        fclose(file);
    }
}

#include <stdio.h>
int main()
{
    int x;
    FILE *fp;
    fp=fopen("jim.txt","w");

    if(fp==NULL)
    {
        printf("file does not error\n");
    }
    else
    {
        printf("file is open\n");
    }
    fclose(fp);

   x=remove("sahadat.txt");
    if(x == 0)
    {
        printf("file delete successfully");

    }
    else{
    printf("error: File delete unsuccessfull");}

return 0;
}

#include<stdio.H>
int main()
{
FILE *fp;
char h;
int x;
fp=fopen("FILE 11.txt","r");
if(fp==0)
{
    printf("file is read type");
}
else
    printf("file is write type");
close(fp);

}

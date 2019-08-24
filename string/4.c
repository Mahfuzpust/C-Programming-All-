 #include<stdio.h>
    int main(){

    char str[1000],ch;
    int i,len=0,c[26] = {0};
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    for(i = 0; i < len; i++){
        if(str[i]>= 65 && str[i] <= 90){
            c[str[i] - 65]++;

        }
        else if(str[i] >= 97 && str[i] <= 122){
            c[str[i] - 97]++;

        }
    }

    printf("\nThe Different Types Of Characters Are: \n");
    ch=65;
    for(i = 0; ch <=90; i++){

        if(c[i] != 0)
        {
        printf("\n%c Counted %d ",ch,c[i]);
        }
        ch++;
    }
    return 0;
    }

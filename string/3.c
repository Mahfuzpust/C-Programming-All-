        #include<stdio.h>
        int main()
        {
        char x[1000];
        int i,j=0,n=0;
        gets(x);
        for(i=0;x[i]!='\0';i++)
        {
            n++;
        }

         printf("\nNew number is: ");

         for(i=0;i<n;i++)
        {


        if(x[i]=='a' || x[i]=='e' ||  x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]==' ' || x[i]=='A' || x[i]=='E' ||  x[i]=='I' || x[i]=='O' || x[i]=='U')
        {
                        x[j]=x[i];
                        j++;

        }

                }
                x[j]='\0';

                printf("%s  ",x);

           return 0;
        }


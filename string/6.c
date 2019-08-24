#include<stdio.h>
int main(){
  int i=0,j=0;
  char str1[20],str2[20];

  printf("Enter first string ");
  gets(str1);

  printf("Enter second string ");
  gets(str2);

  printf("Before concatenation \n");

  puts(str1);
  puts(str2);

  while(str1[i]!='\0'){
      i++;


  }
  while(str2[j]!='\0')
    {


      //str1[i++]=str2[j++];
      str1[i]=str2[j];
      i++;
      j++;

  }
  str1[i]='\0';

  printf("After concatenation \n");
  printf("%s",str1);
 return 0;
}

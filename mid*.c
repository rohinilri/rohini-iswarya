#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  int len,b;
  printf("enter");
  scanf("%s",&str);
  len=strlen(str);
  if(len%2!=0)
  {
    b=len/2;
      str[b]='*';
  }
    printf("%s",str);
  }
  

#include<stdio.h>
int main()
{
  char s1[50],s2[50];
  int i=0,j=0;
  printf("enter the string");
  scanf("%s%s",&s1,&s2);
  while(s1[i]!='\0')
  i++;
  while(s2[j]!='\0')
  {
    s1[i]=s2[j];
    j++;
    i++;
  }
  s1[i]='\0';
  printf("%s",s1);
  
}

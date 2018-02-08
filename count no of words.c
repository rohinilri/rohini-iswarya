#include<stdio.h>

int main()
{
  char s[10000];
  int i,count=1;
  printf("enter The Sentence");
  scanf("%[^\n]s",&s);
  for(i=0;s[i]!='\0';i++)
{
  if(s[i]==' ')
  {
    count++;
  }
}
  printf("%d",count);
}

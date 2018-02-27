#include<stdio.h>
#include<string.h>
int main()
{
char s1[20],s2[20];
int i,a,b;
printf("enter the string");
scanf("%s%s",&s1,&s2);
for(i=0;i!='\0';i++)
{
  scanf("%s%s",&s1[i],&s2[i]);
}
if(s1[i]==s2[i])
  printf("equal");
  else
  printf("not equal");
  a=strlen(s1);
  b=strlen(s2);
if(a>=b)
printf("\n%s",s1);
if(a<b)
printf("\n%s",s2);
}

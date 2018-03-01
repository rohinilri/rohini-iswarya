#include<stdio.h>
int main()
{
  char str[50];
  int i,count=0,count1=0;
  printf("enter the string");
   scanf("%s",&str[i]);
  for(i=0;str[i]!='\0';i++)
  {
   if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
    count++;
    }
   else if(str[i]>'0'&&str[i]<'9')
    {
      count1++;
    }
}
if((count>0)&&(count1>0))
printf("yes");
else
printf("no");
}

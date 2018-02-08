#include<stdio.h>
void main()
{
char s[100];
int i;
printf("\n Enter the string");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='0'&&s[i]<='1')
{
printf("yes");
break;
}
else
printf("no");
}
}

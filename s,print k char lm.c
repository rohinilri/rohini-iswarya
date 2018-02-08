
#include<stdio.h>
void main()
{
char s[50];
int i,k;
printf("Enter the string:");
scanf("%s",&s);
printf("Enter the limit:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%c",s[i]);
}
}

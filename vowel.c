#include<stdio.h>
int main()
{
char s[10];
int i;
printf("enter the string");
scanf("%s",&a);
for(i=0;i!='\0';i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='U'||s[i]=='I'||s[i]=='O'||s[i]=='U')
{
printf("it is vowel %s",s);
}
else
printf("it is not an vowel");
}
}


#include<stdio.h>
void main()
{
int n,temp,rem,rev=0;
printf("\n Enter the number");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rem=temp%10;
rev=(rev*10)+rem;
temp=temp/10;
}
while(rev!=0)
{
rem=rev%10;
printf("\t%d",rem);
rev=rev/10;
}
}

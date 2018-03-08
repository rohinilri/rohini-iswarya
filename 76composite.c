#include<stdio.h>
int main()
{
int n,i,c=0;
printf("enter a number for n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c>2)
printf("it is a composite number");
else
printf("it is not a composite number");
}

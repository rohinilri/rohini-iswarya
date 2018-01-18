#include<stdio.h>
int main()
{
int n,i,d=0;
printf("enter a number for n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i)
{
c++;
}
}
if(c==2)
printf("it is a prime number");
else
printf("it is not a prime number");
}

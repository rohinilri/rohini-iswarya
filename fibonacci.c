#include<stdio.h>
int main()
{
int i,n,n1=1,n2=1,m;
printf("enter the number for n");
scanf("%d",&n);
printf("the fibanocci series");
for(i=1;i<=n;i++)
{
printf(" %d",n1);
m=n1+n2;
n1=n2;
n2=m;
}
}

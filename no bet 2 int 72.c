#include<stdio.h>
int main()
{
int l,r,n,i;
printf("enter the no for l and r:");
scanf("%d%d",&l,&r);
printf("enter your is between the range l and r");
scanf("%d",&n);
for(i=l;i<=r;i++)
{
if(n>=l&&n<=r)
{
printf("yes");
break;
}
else
{
printf("no");
break;
}
}
}

#include<stdio.h>
int main()
{
int a[10],n,i;
printf("enter the no");
scanf("%d",&n);
printf("enter the array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
printf("\n%d\t%d",a[i],i);
}
}

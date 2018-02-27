#include<stdio.h>
int main(void)
{
int n,num[40],i,sum=0,avg;
printf("enter the total num");
scanf("%d",&n);
printf("the numbers are");
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<n;i++)
{
sum=sum+num[40];
}
avg=sum/n;
printf("%d",avg);
}

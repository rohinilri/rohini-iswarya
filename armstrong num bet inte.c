#include<stdio.h>
int main()
{
int n1,n2,i,num,rem,temp;
printf("enter the number for n1 and n2);
scanf("%d%d",&n1,n2);
for(i=n1+1;i<n2;i++)
{
num=0;
temp=i;
while(temp!=0)
{
rem=temp%10;
num=num+rem*rem*rem;
temp=temp/10;
}
}
if(i=num)
printf("%d,it is an amstrong number",i);
else
printf("%d,it is not an armstrong number",i);
}

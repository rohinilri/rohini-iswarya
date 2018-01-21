#include<stdio.h>
int main()
{
int n,num,rem,result=0;
printf("enter a number");
scanf("%d",&n);
num=n;
while(num!=0)
{
rem=num%10;
result=rem*rem*rem;
num=num/10;
}
if(result==n)
printf("%d it is an armstrong number",n);
else
printf("%d it is not an armtrong number",n);
}

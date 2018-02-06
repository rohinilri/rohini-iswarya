
#include<stdio.h>
void main()
{
int n;
printf("\n Enter the number");
scanf("%d",&n);
while(n!=0)
{
if(n%2==0)
{
printf("%d",n);
break;
}
n--;
}
}

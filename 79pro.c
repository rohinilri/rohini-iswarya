#include <stdio.h>
#include<math.h>
int main()
{
int n1,n2,i,pro;
printf("enter the numbers");
scanf("%d%d",&n1,&n2);
pro=n1*n2;
for(i=0;i<(pro/2);i++)
{
if(pow(i,2)==pro)
{
printf("yes it is perfect square");
break;
}
}
}

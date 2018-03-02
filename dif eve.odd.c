#include<stdio.h>
int main()
{
  int a,b,dif;
  printf("enter the numbers");
  scanf("%d%d",&a,&b);
  if(a>b)
  {
    dif=a-b;
  }
  else
  {
    dif=b-a;
  }
if(dif%2==0)
printf("even");
else
printf("odd");
}

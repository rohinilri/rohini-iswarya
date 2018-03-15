#include<stdio.h>
int main()
{
  int n,num,sum=0,i;
  printf("ENTER RANGE:");
  scanf("%d",&n);
  printf("THE NUMBERS ARE");
  for(i=0;i<n;i++)
  {
    scanf("%d",&num);
  sum=sum+num;
  }
  printf("sum is %d",sum);
}

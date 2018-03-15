#include<stdio.h>
int main()
{
  int num,temp,rev,rem;
  printf("enter the number:");
  scanf("%d",&num);
  temp=num;
  while(num>0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  printf("the reverse number are %d",rev);
}

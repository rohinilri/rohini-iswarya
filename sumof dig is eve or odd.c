

#include <stdio.h>
void main()
{
  int num,rem,sum=0;
  printf("enter the number");
  scanf("%d",&num);
  while(num!=0)
  {
    rem=num%10;
    sum=sum+rem;
    num=num/10;
  }
  printf("%d",sum);
  if(sum%2==0)
  printf("\n it is even");
  else
  printf("\n it is odd");
}

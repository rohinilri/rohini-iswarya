#include<stdio.h>
int main()
{
  int min,h,m;
  printf("enter the minutes:");
  scanf("%d",&min);
  h=min/60;
  m=min%60;
  printf("%d %d",h,m);
}

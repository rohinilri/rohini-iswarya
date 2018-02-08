#include<stdio.h>
int main()
{
  int n,m,c;
  printf("enter the for n and m:");
  scanf("%d%d",&n,&m);
  c=n+m;
  printf("%d",c);
  if(c%2==0)
  printf("\n it is even");
  else
  printf("\n it is odd");
}

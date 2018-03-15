#include<stdio.h>
int main()
{
  int n,k,i,num[50];
  printf("ENTER number :");
  scanf("%d",&n);
  printf("enter k value:");
  scanf("%d",&k);
  printf("the numbers are");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&num[i]);
  }
  printf("k value of numbers ");
  printf("%d",num[k]);
}

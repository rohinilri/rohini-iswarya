#include<stdio.h>
int main()
{
  int a[100],i,max;
  printf("the numbers are");
  for(i=1;i<=10;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<=10;i++)
  {
  if(a[i]>max)
{
  max=a[i];
}
}
printf("\n the max elements is:%d",max);
}

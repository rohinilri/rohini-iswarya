#include<stdio.h>
int main()
{
  int a[100],n,i,max,min;
  printf("enter the  total numbers");
  scanf("%d",&n);
  printf("the numbers are");
  for(i=0;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<=n;i++)
  {
  if(a[i]>max)
{
  max=a[i];
}
min=a[0];
 if(a[i]<min)
 {
    min=a[i];
  }
}
printf("\n the max elements is:%d",max);
printf("\n the min elements is:%d",min);
}

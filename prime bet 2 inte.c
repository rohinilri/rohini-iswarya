#include<stdio.h>
int main()
{
int i,n,m,c=0;
printf("enter the number for n and m");
scanf("%d%d,&n,&m);
for(i=n;i<=m;i++)
{
if(i%1==0)
c++;
}
if(c==2)
 printf("%d",prime numbers are,i);
 else
  printf("%d",not a prime numbers are,i);
      }     
 
      

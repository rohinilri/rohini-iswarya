#include<stdio.h>
int main()
{
int a,b;
printf("enter the number for a and b");
scanf("%d%d",&a,&b);
printf("%d%d before swappig",a,b);
a=a^b;
b=a^b;
a=b^a;
printf("\n %d%dafter swapping ",a,b);
}

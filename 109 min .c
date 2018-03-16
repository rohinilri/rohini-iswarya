#include <stdio.h>
  void main() {
    int a[10],i,min;
  printf("Enter ten values:");
    for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
    }
    min= a[0];
    for (i = 0; i < 10; i++) {
if (a[i]<min) 
{
  min=a[i];
}
    }
    printf("minimum ten numbers is %d", min);
}

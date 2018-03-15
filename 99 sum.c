#include "stdio.h"

int main(void) {
  int a,b,c;
  printf("enter");
  scanf("%d %d %d",&a,&b,&c);
  printf("a=%d b=%d c=%d",a,b,c);
  printf("\n %d",a*b%c);
  
}

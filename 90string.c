#include <stdio.h>
 #include<string.h>
 void main()
 {
 char str[20],repl[50];
 int i,j;
 printf("Enter the String:");
 scanf("%s",&str);
 for(i=0;str[i]!='\0';i++)
 {
 if(isdigit(str[i]))
 {
   repl[j]=str[i];
   j++;
 }
 }
 printf("%s",repl);

}

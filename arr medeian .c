#include <stdio.h>
#define adhoc main
void adhoc()
{
  int arr[100];
    int i, j, num, temp;
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("the elements are \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
       }
 }
        printf("%d the median element are",arr[num/2]);
}


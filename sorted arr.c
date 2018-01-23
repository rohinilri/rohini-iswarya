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
        scanf("%d", &array[i]);
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
    printf("Sorted array is...\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }
}



#include <stdio.h>
int main()
{
    int array[25], num, swap, i;
    printf("Enter the number of elements : ");
    scanf("%d", &num);
    printf("\n Enter the elements : "); // accessing array element
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    // from next line bubble sort logic//
    for (i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap = array[j + 1];
                array[j + 1] = array[j];
                array[j] = swap;
            }
        }
    }
    printf("the sorted aray is:");
    for (int i = 0; i < num; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}
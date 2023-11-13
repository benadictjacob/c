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
    // from next line sselection  sort logic//
    for (i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (array[i] > array[j])
            {
                swap = array[i];
                array[i] = array[j];
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
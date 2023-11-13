#include <stdio.h>
void main()
{
    // find the maximum and minimum value of two numbers//
    int ar[25];
    printf("enter anarrray");
    for (int i = 0; i < 6; i++)
    {
        scanf(" %d", &ar[i]);
    }
    int min = ar[0];
    int max = ar[0];
    for (int i = 0; i < 6; i++)
    {
        if (ar[i] < min)
            min = ar[i];
        if (ar[i] > max)
            max = ar[i];
    }
    printf("%d is the min and %d is the maximum", min, max);
}
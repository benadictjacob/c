#include <stdio.h>
int main()
{
    int j, l, h;
    // to print prime numbers in given range//
    printf("enter the upper and lower limit");
    scanf(" %d %d", &l, &h);
    for (int i = l; i <= h; i++)
    {
        int count = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
            printf(" %d \n", i);
    }
    return 0;
}
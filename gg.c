#include <stdio.h>
void main()
{
    int n, r, k = 1, c;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n; c++)
        {
            c >= n - r + 1 ? printf("k") : printf(" ");
        }
        printf("\n");
    }
}
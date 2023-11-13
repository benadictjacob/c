#include <stdio.h>
int main()
{
    // to find the largest of three numbers //
    int n, m, y;
    printf("entre the three numbers ");
    scanf("%d %d %d", &n, &m, &y);
    if (m > n && m > y)
        printf("the largest number is :%d", m);
    else if (n > m && n > y)
        printf("the largest number is %d", n);
    else
        printf("the largest number is %d", y);
    return 0;
}
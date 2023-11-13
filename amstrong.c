
// void main()
// {
//     int n, tem, sum = 0, r;
//     // to check the armstrong no//
//     printf("entre the number");
//     scanf("%d", &n);
//     tem = n;
//     while (n > 0)
//     {
//         r = n % 10;
//         sum = sum + pow(r, 3);
//         n = n / 10;
//     }
//     if (sum == tem)
//     {
//         printf("the number is angstrom");
//     }
//     else
//     {
//         printf("the number is not angstrom");
//     }
// }#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, sum = 0, r;

    // To check the Armstrong number //
    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }

    if (sum == temp)
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}

// program to convert any upper to lower//
#include <stdio.h>
#include <string.h>
int main()
{
    printf("hello");
    char str[100];
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    puts(str);
    return 0;
}
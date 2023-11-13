#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    char string1[20], string2[20], concatenated_string[20];
    int option;
    //  to find string length
    printf("Enter the string:");
    /*scanf("%s", string1);*/
    fgets(string1, 100, stdin);
    printf("Enter the string:");
    /*scanf("%s", string1);*/
    fgets(string2, 100, stdin);
    int length, count = 0;
    printf("%d", strlen(string1));
    // to concatenation string
    printf("Enter the first string:");
    scanf("%s", string1);
    printf("Enter the second string:");
    scanf("%s", string2);

    int i, j;
    for (i = 0; string1[i] != '\0'; i++)
    {
        concatenated_string[i] = string1[i];
    }
    for (j = 0; string2[j] != '\0'; j++)
    {
        concatenated_string[i + j] = string2[j];
    }
    concatenated_string[i + j] = '\0';
    printf("The concatenated string:%s", concatenated_string);
    // to concaginate two no//
    return 0;
}
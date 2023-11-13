#include <stdio.h>
// to do a program based on file//
int main()
{
    FILE *fptr; // fptr is just a file name//
    fptr = fopen("test.txt", "r");
    if (fptr == NULL)
        printf("file dosen'nt exist");
    char ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    // fprintf(fptr, "%c", 'o');//
    fclose(fptr); // when the use of file is done file should be closed//

    return 0;
}
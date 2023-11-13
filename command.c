#include <stdio.h>

int main(int argc, char *argv[])
{
    // Check if at least one command line argument was provided
    if (argc < 2)
    {
        printf("Usage: %s <arg1> [arg2] [arg3]\n", argv[0]);
        return 1; // Exit the program with an error code
    }

    // Access and use the command line arguments
    printf("Command line arguments:\n");
    for (int i = 1; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0; // Exit the program with a success code
}
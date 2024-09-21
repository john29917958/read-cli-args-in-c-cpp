#include "stdio.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

void print_args(int argc, char **argv);

int main(int argc, char **argv)
{
    print_args(argc, argv);

    // Read command line arguments into variables.
    char *exec_file_path = argv[0];
    char *arg1 = argv[1];
    int arg2;
    double arg3;

    sscanf(argv[2], "%d", &arg2);
    sscanf(argv[3], "%lf", &arg3);

    return 0;
}

void print_args(int argc, char **argv)
{
    printf("Executable file path is: %s\n", argv[0]);
    printf("Number of command line arguments is: %d\n", argc);
    for (int i = 1; i < argc; i++)
    {
        printf("Argument[%d] is: %s\n", i, argv[i]);
    }
}
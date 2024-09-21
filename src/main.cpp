#include <iostream>
#include <string>

void printArgs(int argc, char **argv);

int main(int argc, char **argv)
{
    printArgs(argc, argv);

    // Read command line arguments into variables.
    std::string execFilePath = argv[0];
    std::string arg1 = argv[1];
    int arg2 = std::stoi(argv[2]);
    double arg3 = std::stod(argv[3]);

    return 0;
}

void printArgs(int argc, char **argv)
{
    std::cout << "Executable file path is: " << argv[0] << std::endl;
    std::cout << "Number of arguments is: " << argc << std::endl;
    for (int i = 1; i < argc; i++)
    {
        std::cout << "Argument[" << i << "] is: " << argv[i] << std::endl;
    }
}
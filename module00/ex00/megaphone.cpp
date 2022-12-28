#include <iostream>
#include <cstring>

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }
    for (int i = 1; i < argc; i++)
    {
        int length = strlen(argv[i]);
        for (int j = 0; j < length; j++)
        {
            std::cout << (char)toupper(argv[i][j]);
        }
    }
    std::cout << "\n";
    return (0);
}

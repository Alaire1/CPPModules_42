#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        int i = 1;
        while(i < argc)
        {
            int j = 0;
            while(argv[i][j] != 0)
            {
                std::cout << (char)std::toupper(argv[i][j]);
                j++;
            }
            if (i < argc - 1)
                std::cout << " ";
            i++;
        }
    }
    std::cout << std::endl;
    return(0);
}










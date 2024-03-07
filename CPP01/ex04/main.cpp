#include <iostream>
#include <fstream>
#include <string>


int replace(std::string filename, std::string s1, std::string s2)
{
    std::string new_file = filename + ".replace";
    if (!filename.empty())
    {
        std::ifstream infile(filename.c_str());
        std::ofstream outfile(new_file.c_str());
        std::string line;
        if (infile.is_open() && outfile.is_open())
        {
            while (std::getline(infile, line))
            {
                int i = line.find(s1);
                while (i != -1)
                {
                    line.erase(i, s1.length());
                    line.insert(i, s2);
                    i = line.find(s1, i + s2.length());
                }
                outfile << line << std::endl;
            }
            infile.close();
            outfile.close();
        }
        else
        {
            std::cerr << "Failed to open infile" << std::endl;
            return (1);
        }
    }
    else
    {
        std::cerr << "Invalid filename" << std::endl;
        return (1);
    }
    return (0);
}

int main(int argc, char** argv)
{
    std::string red = "\033[0;31m";
    std::string reset = "\033[0m";
    if (argc != 4) {
	    std::cerr << red << "Invalid number of arguments" << reset << std::endl;
	return 1;
    }

    std::string file = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    if (s1.empty() || s2.empty()) {
	    std::cerr << red << "Invalid arguments" << reset << std::endl;
	return 1;
    }

    replace(file, s1, s2);
    return 0;
}

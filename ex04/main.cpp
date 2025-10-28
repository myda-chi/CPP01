#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: cannot open file " << filename << std::endl;
        return;
    }

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open()) 
    {
        std::cerr << "Error: cannot create output file." << std::endl;
        inputFile.close();
        return;
    }

    bool foundAny = false;
    std::string line;

    while (std::getline(inputFile, line)) {
        std::string result;
        size_t pos = 0;

        while (true) {
            size_t found = line.find(s1, pos);
            if (found == std::string::npos) {
                result += line.substr(pos);
                break;
            }
            foundAny = true; // ✅ Mark that s1 appeared
            result += line.substr(pos, found - pos);
            result += s2;
            pos = found + s1.length();
        }
        outputFile << result;
        if (!inputFile.eof())
            outputFile << std::endl;
    }

    inputFile.close();
    outputFile.close();

    if (foundAny)
        std::cout << "✅ Replacement complete: created " << filename + ".replace" << std::endl;
    else
        std::cout << "ℹ️ No occurrences of \"" << s1 << "\" found in " << filename << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cerr << "Not enough arguments " << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }
    replaceInFile(filename, s1, s2);
    return 0;
}

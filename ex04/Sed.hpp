#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <fstream>

class Sed
{
private:
    std::string _in;
    std::string _out;
public:
    Sed();
    ~Sed();
    void replaceInfile(const std::string& filename, const std::string& s1, const std::string& s2);
};

#endif
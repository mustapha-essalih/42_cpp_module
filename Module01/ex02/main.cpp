#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>
 

int main()
{
    std::string   str;
    std::string *stringPTR;

    str = "HI THIS IS BRAIN";
    
    stringPTR = &str;
    std::string &stringREF = str;

    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}
#include <iostream>
#include <string>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF= s;

    std::cout << "Address of s :" << &s << std::endl;
    std::cout << "Address stored in stringPTR :" << stringPTR << std::endl;
    std::cout << "Address stored in stringREF :" << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Value of s: " << s << std::endl;
    std::cout << "Value pointed to by stringPTR :" << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF :" << stringREF << std::endl;
}
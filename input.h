# include <string>
# include <iostream>

std::string input(std::string str = "")
{
    std::cout << str << std::endl;
    std::getline(std::cin,str);
    return str;
}

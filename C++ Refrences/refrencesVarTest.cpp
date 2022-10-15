#include <iostream>

int main()
{
    std::string food = "Pizza";
    std::string &meal = food;
    std::cout << food << "\n";  
    std::cout << meal << "\n";
    return 0;
}
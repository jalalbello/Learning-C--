#include <iostream>

int main(){
    int Number1, Number2;

    std::cout << "Whats the first number you want to add";
    std::cin >> Number1;
    std::cout << "Whats the second number you want to add";
    std::cin >> Number2;
    std::cout << "Your result is : " << Number1+Number2 ;
    return 0;
    }
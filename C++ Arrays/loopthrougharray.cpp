#include <iostream>

int main()
{
    std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int ArrayLength = cars->length();
    for (int i = 0; i < ArrayLength - 1; i++) {
    std::cout << cars[i] << "\n";
}
    return 0;
}
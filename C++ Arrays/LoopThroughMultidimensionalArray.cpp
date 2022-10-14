#include <iostream>

int main()
{
    std::string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            std::cout << letters[i][j] << "\n";
        }
    }
    return 0;
}
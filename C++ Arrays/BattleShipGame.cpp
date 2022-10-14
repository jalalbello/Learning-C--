#include <iostream>

int main()
{
    int PlayingField[4][4]= {
        {0, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 0, 0},
    };


    int hits = 0;

    while (hits < 4){
    int row, col; 
    std::cout << "What is the X of the attack \n";
    std::cin >> row ;

    std::cout << "What is the Y of the attack \n";
    std::cin >> col ;
    if (PlayingField[row][col]){// check if there is ship 1 == True 
        PlayingField[row][col] = 0;
        std::cout << "Hit ! \n";
        hits ++;
    }   
    else {
        std::cout << "Miss \n";
    }
    }
}
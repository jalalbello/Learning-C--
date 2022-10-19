#include <iostream>
#include <fstream>
// String header Needed for the get line
#include <string>

// To read from a file we use
// fstream
// ifstream
int main()
{   // Declare a string as its need to add as an arg in the getline () function
    std::string myText;
    // Read the file from text
    std::fstream myReadFile("filename.txt");

    while(std::getline(myReadFile, myText)) {
        std::cout << myText;
    }  
    // Closing the file as we are done with it
    // Important for reduce bugs, and optimization
    myReadFile.close();
    return 0;
}
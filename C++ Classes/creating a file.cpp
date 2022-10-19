#include <iostream>
#include <fstream>
int main()
{
    // Create the File
    std::ofstream Myfile("filename.txt");
    // Write to the File
    Myfile << "Writing \n To \n The file"; 
    // Closing the file as its necessary to limit bugs and optimize the program
    Myfile.close();
    return 0;
}
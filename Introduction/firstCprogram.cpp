#include <iostream>
//  import header file library, lets us work with 'cout'
using namespace std;
// the standard c++ library
// If we don't use that we need to type std::cout
// never use namespace in a header file, it can get really hard to track
// Good practice is to use namespace only for your own libraries

// C++ ignores white space. But we use it to make the code more readable.

// that always appear in a C++ program, is int main(), Any code inside its curly brackets {} 
int main() {
  cout << "Hello World!";
  
  // cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World".

  return 0;
  // return 0 ends the main function.
}
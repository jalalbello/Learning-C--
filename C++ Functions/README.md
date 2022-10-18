## Declare a function

```c++
void myFunction() { // declaration
  // code to be executed // Definition
}
```
- **myFunction**() is the name of the func
- **void** means that the function does not have a return value
  
A C++ function consist of two parts:

- Declaration: the return type, the name of the function, and parameters (if any)
- Definition: the body of the function (code to be executed)

> If a user-defined function, such as myFunction() is declared after the main() function, an error will occur:

It is possible to **separate** the declaration and the definition of the function - for code optimization.

Alot of programs have function declaration **above** main(), and function definition **below** main(). This will make the code better organized and easier to read.
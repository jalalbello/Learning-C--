# Default Parameter Value

We set it by using the "=" sign.

If we call the function, without an arg, it uses the default value

```c++
void myFunction(string country = "Norway") {
  cout << country << "\n";
}
myFunction()
// outputs Norway
```

## Return value

The voice keyword indicates the the function should not return a value, if we want it to return a value we use the data type instead of void, and use the return keyword

## Pass by Value

We passed by value in the previous example.

We want to do that when :

- We do not want to change the original values

- To prevent value from changing via multithreading

> Advantages:

- [x] Great while working with multithreaded or asynchronous programs
- [x] Pass by value method can be used to convert a string from an integer without modifying its value.

> Disadvantages:

- [ ] Since pass by value is implemented by passing a copy of the data, the data size increases (doubles). This may not be an issue with smaller programs but can cost efficiency in larger programs.
- [ ] If the argument is too large, copying the values can take a significant amount of time.
- [ ] There is no way to propagate back the updated values through the parameters.


## Pass by refrence

This method is not recommended while developing multithreaded programs since it can cause loss of data.

Being a high-level mechanism, pass by reference can only be used within a single program.

## Pass Array

Note that when you call the function, you only need to use the name of the array when passing it as an argument myFunction(myNumbers). 

However, the full declaration of the array is needed in the function parameter (int myNumbers[5]).

## Function Overloading

Multiple functions can have the same name as long as the number and/or type of parameters are different.

## Recursion

Having a function call itself with a diffrent a parameter, until a condtion is met so that the function ultimately returns the output.

Learn more here: https://www.programiz.com/cpp-programming/recursion


To use strings, I must include an additional header file in the source code, the <string> library

## String Concatenation

We can add two strings toghether to make a new string, its called concatenation, we simply use the + operator

We can also use the **Append** function

```c++
string fullName = firstName.append(lastName);
cout << fullName;
```

> If you try to add a number to a string, an error occurs

## String Length

```c++
#include <iostream>

int main()
{
    std::string greeting = "Hello";
    std::cout << greeting.length();
    return 0;
```

## Access Strings

```c++
string myString = "Hello";
cout << myString[0];
// Output H
```

> The following code will not work

```c++
const std::string greeting = "Hello";
greeting[0] = 'J';
```
> expression must be a modifiable value
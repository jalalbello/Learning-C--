| Type |                       Description |
| :-------------- | --------------------------
**int** | Stores whole numbers **2-4 bytes**
**double** | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits **8 bytes**
**char** | Stores single charachter, they are surrounded by single quotes **1byte**
**string** | Stores text, surrounded by double qutoes
**bool** | Stores true or false **1 byte**
**float** | Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits **4bytes**

## Declare more than one var of the same type 

we can use a comma-seperated list:

```c++
int x = 5, y = 6, z = 50;
cout << x + y + z;
```

## One Value to Multiple Variables
```c++
int x, y, z;
x = y = z = 50;
cout << x + y + z;
```

## C++ Identifiers

All C++ variables must be identified with unique names

The general rules for naming variables are:

- Names can contain letters, digits and underscores
- Names must begin with a letter or an underscore (_)

- Names are case sensitive (myVar and myvar are different variables)
- Names cannot contain whitespaces or special characters like !, #, %, etc.

- Reserved words (like C++ keywords, such as int) cannot be used as names

## C++ Constants

When you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only)

I should always declare the variable as constant when I have values that are unlikely to change

## C++ User Input

We use **cin** to get user input

cin is a predefined variable that reads data from the keyboard with the **extraction operator (>>)**
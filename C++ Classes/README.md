Procedural programming is about writing procedures or functions that perform operations on the data

So the function does not include the data itself

While object-oriented programming is about creating objects that contain both the function and the data

> Advantages:

- [x] Faster and easier to execute, as in needing less code and less dev time
- [x] Provides a clear stucture for the programs
- [X] Keeps the code dry

# What is a class

Attributes are variables that belong to the class

Methods are functions that belong to the class

**Both** are called members of a class

```c++
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
```

# Methods

There are two ways to define methods:

Inside, Outside

We access the methods using the doth syntax, just like how we access attributes

# Scope resolution operator 

its used for:

-  Accessing a global variable when there is a local variable with same name
-  Define a function **outside** a Class

- To access a class’s static variables.
  
- In case of multiple Inheritance:

- For namespace

Defining a method outside the class declaration

```c++
void MyClass::myMethod() {
  cout << "Hello World!";
}
```

# Constructors

A constructor is a special method that is called automatically when a class object is created

To create it we used the class name and the ()

```c++
class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};
```


# Acess Specifier

```c++
public // they can be accesed from outside the class
private // cannot be accessed outside the class
protected // Can be accesed in inherited classes only
```

# Encapsulation

Its making sure sensitive data is hidden from the users

Its a good practice to declare attributes as private (as often as you can)

> Advantages:

- [X] Better control of the data
- [X] Better security of the data
- [X] Changing one part without affecting the other part

# Inheritance

To inherit from a class, use the : symbol

```c++
class Car: public Vehicle {
  public:
    string model = "Mustang";
};
```

# Multilevel Inheritance

So there is the base class (the original class), and derived classes (the inherited class)

We can have a derived class from another derived class

# Multiple Inheritance

We can derive a class from multiple classes, we just need to seperate them with a comma

```c++
class MyChildClass: public MyClass, public MyOtherClass {
};
```

# Acess specifiers

**Protected**, is similar to private, but it can also be accessed in the inherited class

 --- 
> Public, protected, and private inheritance have the following features:

- **Public** inheritance makes **public** members of the base class **public** in the derived class, and the **Protected** members of the base class remain **protected** in the derived class.
- **Protected** inheritance makes the **public** and **Protected** members of the base class **protected** in the derived class.
- **Private** inheritance makes the **public** and **Protected** members of the base class **private** in the derived class.
- Note: **Private** members of the base class are inaccessible to the derived class
  
# Files

The fstream library allows us to work with files.

To use the fstream library, we include both the standard <-iostream> AND the <-fstream> header file:

```c++
#include <iostream>
#include <fstream>
```

There are three classes included in the fstream library, which are used to create, write or read files:

<table class="ws-table-all notranslate">
<tbody>
<tr>
<th style="width:26%">Class</th>
<th style="width:74%">Description</th>
</tr>
<tr>
<td><code class="w3-codespan">ofstream</code></td>
<td>Creates and writes to files</td>
</tr>
<tr>
<td><code class="w3-codespan">ifstream</code></td>
<td>Reads from files</td>
</tr>
<tr>
<td><code class="w3-codespan">fstream</code></td>
<td>A combination of ofstream and ifstream: creates, reads, and writes to files</td>
</tr>
</tbody>
</table>

## **Exceptions**

### **Try** :
Define a block to be tested for errors while executed

### **Throw**:
Throws an exception when a problem is detected, lets us create a custom error

### **Catch**:
Run a code if an error occurs in the try block

```c++
try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch ( /*can take parameters*/) {
  // Block of code to handle errors
}
```

## Handle Any Type of Exceptions (...)

If you do not know the throw type used in the try block, you can use the "three dots" syntax (...) inside the catch block, which will handle any type of exception:

```c++
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw 505;
  }
}
catch (...) {
  cout << "Access denied - You must be at least 18 years old.\n";
}
```
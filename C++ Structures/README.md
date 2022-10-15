## Structures (struct)

They are a way to group multiple related variables into one place

Unlink an array, they can contain **multiple** **data** **types**

Each var in the struct is known as a **member** of the structure

## Access Structure Members

We use the dot syntax

```c++
myStructure.myString = "Hello World!";
cout << myStructure.myNum 
// Outputs Hello World
```

## One Structure / Multiple Variables

```c++
struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2;
// Create two structure variable called myCar1 myCar2
```

# Named Structures

By naming it we can treat it as a datatype

More specifically we can create vars with this struct anywhere in our program

To create a Named struct we put the name after the struct keyword

```c++
struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};
```

to declare a datatype that uses that tructure we use the name of the struct as the datatype (instead of int for example)

```c++
myDataType myVar;
```
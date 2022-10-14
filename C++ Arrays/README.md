## Declaring an array

Specify the name of the array, and the number of elements it should store:
```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
int myNum[3] = {10, 20, 30};
```

## Change an Array Element

```c++
cars[0] = "Opel";
cout << cars[0];
// Now outputs Opel instead of Volvo
```

## Omit Array Size

We don't have the specify the size of the array, but if we don't it will only be as big as the elements inserted into it

Its only a problem if we want extra space for future elements, it means we have to overwrite the existing values

If we specify the size, the array will reserve the extra space

## Omit Elements on Declaration

```c++
string cars[5];
```

## Get the Size of an Array

```c++
int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers);
// result is 20
```

> The result is in bytes

```c++
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout << getArrayLength;
```

> The result in how many elements teh array has

## Multi-Dimensional Arrays

Tree dimentional array example

```c++
string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};
```

Loop Through a Multi-Dimensional Array

```c++

```

> Array of 2 elements, with 2 subarrays, with two elements

## Why Multi-Dimensional Arrays

Multi-dimensional arrays are great at representing grids. 
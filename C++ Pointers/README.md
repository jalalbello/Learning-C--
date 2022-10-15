A pointer is a variable that stores the memory address as its value.

Its created with the * operator, The address of the variable I'm working with is assigned to the pointer.

```c++
string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food
```

>the pointer has to match the type of the variable I'm working with.

I can also use the pointer to get the value of the variable, by using the * operator (the dereference operator)

>The * sign can be confusing here, as it does two different things in our code:

- When used in declaration (string* ptr), it creates a pointer variable.
- When not used in declaration, it act as a dereference operator.

## Modify Pointers
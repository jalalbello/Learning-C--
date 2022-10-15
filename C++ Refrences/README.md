 A reference variable is a "reference" to an existing variable, and it is created with the & operator:

 ```c++
string food = "Pizza"; 
string &meal = food;  
 ```

The code will work without the & as I tested in the cpp file in this folder

So why use refs at all ?, I'm new to this but it seems that refrences are critical for performance and you can't do c++ without em

 A reference is a way of accessing an object, but is not the object itself

 ## Memory Address

 the & operator can also be used to get the memory adress of a variable, wich is the location of where the variable is stored on the computer

 When a var is created, a memorry adress is asigned to a variable 

 ```c++
 string food = "Pizza";
cout << &food; // Outputs 0x6dfed4
 ```
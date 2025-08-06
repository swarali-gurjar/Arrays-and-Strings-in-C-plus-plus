# Arrays-and-Strings-in-C-plus-plus

## Aim:

To understand and implement basic operations on arrays and strings in C++, like declaration, initialization and manipulation (like searching, concatenation, and reversal and palindrome).

## Theory:

### Arrays in C++ :

An array is a collection of elements of the same data type stored in contiguous memory locations. Arrays allow efficient access and modification of data using indices.

### Key Operations:

- Declaration and Initialization: int arr[5] = {1, 2, 3, 4, 5};

- Reversal: Using loops (for, while).

- Searching of an element: Linear or binary search.

### Strings in C++ :

Strings are a sequence of characters. In C++, strings can be handled in two ways:

- Character Arrays (C-strings): char str[20] = "Hello";

- std::string Class (C++ Standard Library): string str = "Hello";

## Algorithm: Searching an element from the array

### Step 1:

Start the program.

### Step 2:

Declare an integer variable n to store the number of elements.

### Step 3:

Prompt the user to input the number of elements and read the value into n.

### Step 4:

Declare an integer array arr[n].

### Step 5:

Use a loop to input n elements into the array.

### Step 6:

Display the entered array elements using a loop.

### Step 7:

Ask the user to enter the element to be searched and store it in a variable called search.

### Step 8:

Initialize a boolean flag found = false.

### Step 9:

Use a for loop to iterate through the array:

- If arr[i] == search, display the index where it was found.

- Set found = true and break the loop.

### Step 10:

After the loop, if found == false, display "Element not found."

### Step 11:

End the program.

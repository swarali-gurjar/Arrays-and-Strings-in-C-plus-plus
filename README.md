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

## 1. Algorithm: Searching an element from the array

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

## 2. Algorithm: Reversing an given array

### Step 1:

Start

### Step 2: 

Read the size of the array n.

### Step 3: 

Create an array numbers of size n.

### Step 4: 

For i from 0 to n-1:

- Read the element numbers[i].

### Step 5: 

For j from n-1 down to 0:

- Print the element numbers[j].

### Step 6: 

End the program.

## 3. Algorithm: Concatenation of two strings

### Step 1:

Start

### Step 2:

Read string a.

### Step 3: 

Read string b.

### Step 4:

Concatenate string b to the end of string a.

### Step 5:

Print the concatenated string a + b.

### Step 6:

End the program.

## 4. Algorithm: Checking if the given string is palindrome or not

### Step 1:

Start

### Step 2:

Read the string a.

### Step 3:

Initialize a boolean variable isPalindrome to true.

### Step 4:

Calculate the length of the string, n = length of a.

### Step 5:

For i from 0 to n/2 - 1 (check till the middle of the string):

- If a[i] is not equal to a[n-1-i]:

- Set isPalindrome to false.

- Break out of the loop.

### Step 6:

If isPalindrome is true:

- Print "a is a Palindrome".

### Step 7:

Else:

- Print "a is not a Palindrome".

### Step 8:

End the program.

## Conclusion:

In this experiment, we successfully understood and implemented basic operations on arrays and strings in C++. We learned how to declare and initialize arrays and strings, and performed various manipulations such as searching elements, concatenating strings, reversing arrays, and checking for palindromes. These fundamental operations are essential for efficient data handling and form the basis for more complex programming tasks. The hands-on implementation enhanced our grasp of C++ syntax and strengthened our problem-solving skills related to data structures.





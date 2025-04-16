#include<stdio.h>
#include<string.h>

void main()
{
    // Step 1: Initialize a string
    char str[] = "Hello World"; 
    /*
        Explanation:
        - The string "Hello World" contains 11 characters: 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'.
        - A null terminator ('\0') is automatically added at the end of the string to mark its termination.
        - Whitespace (the space between "Hello" and "World") is treated as a regular character and is included in the string.
        - Total size of the array = 11 characters + 1 null terminator = 12 bytes.
    */

    // Step 2: Calculate the length of the string using strlen()
    int len = strlen(str); 
    /*
        Explanation:
        - strlen() calculates the length of the string excluding the null terminator ('\0').
        - For "Hello World", strlen() counts 11 characters (including the space).
        - len = 11.
    */

    // Step 3: Calculate the total size of the array using sizeof()
    int size = sizeof(str); 
    /*
        Explanation:
        - sizeof() calculates the total memory allocated to the array, including the null terminator ('\0').
        - For "Hello World", the array has 11 characters + 1 null terminator = 12 bytes.
        - size = 12.
    */

    // Step 4: Print the product of len and size
    printf("Value=%d", len * size); 
    /*
        Explanation:
        - len = 11 (from strlen()).
        - size = 12 (from sizeof()).
        - Product = len * size = 11 * 12 = 132.
        - Output: Value=132.
    */
}

/*
    Differences Between strlen() and sizeof():

    | Feature                  | strlen()                                   | sizeof()                                  |
    |--------------------------|--------------------------------------------|-------------------------------------------|
    | Purpose                  | Returns the length of the string (excluding '\0'). | Returns the total memory allocated to the array (including '\0'). |
    | Includes Null Terminator | No                                         | Yes                                       |
    | Counts Whitespace        | Yes (treats whitespace as a regular character). | Yes (includes whitespace in total size). |
    | Unit of Measurement      | Number of characters in the string.        | Total size in bytes (characters + '\0').  |
    | Example                  | For "Hello World", strlen() returns 11.    | For "Hello World", sizeof() returns 12.   |
*/

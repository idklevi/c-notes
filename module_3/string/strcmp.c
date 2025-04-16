// Title: Program to Demonstrate String Comparison Using strcmp() in C
// Description: This program demonstrates how to compare two strings using the strcmp() function.
// It initializes two character arrays (s1 and s2), compares their content using strcmp(),
// and prints whether they are equal or different.

#include <stdio.h>
#include <string.h>

void main()
{
    // Step 1: Initialize string s1 with "Hello"
    char s1[20] = "Hello"; 
    /*
        Explanation:
        - s1 is initialized with "Hello".
        - It has enough space (20 bytes) to hold the string and the null terminator.
    */

    // Step 2: Initialize string s2 with "World"
    char s2[20] = "World"; 
    /*
        Explanation:
        - s2 is initialized with "World".
        - It has enough space (20 bytes) to hold the string and the null terminator.
    */

    // Step 3: Compare the two strings using strcmp()
    if (strcmp(s1, s2) == 0) 
    {
        /*
            Explanation:
            - strcmp() compares the content of s1 and s2 lexicographically.
            - If the strings are identical, strcmp() returns 0.
        */
        printf("string 1 and string 2 are equal");
    }
    else
    {
        /*
            Explanation:
            - If strcmp() does not return 0, the strings are not identical.
            - A negative value means s1 is lexicographically smaller than s2.
            - A positive value means s1 is lexicographically larger than s2.
        */
        printf("string 1 and 2 are different");
    }
}

/*
    Key Points About strcmp():
    - Purpose: Compares two strings lexicographically.
    - Syntax: strcmp(string1, string2).
    - Return Values:
      - 0: If the strings are identical.
      - Negative value: If string1 is lexicographically smaller than string2.
      - Positive value: If string1 is lexicographically larger than string2.
    - Behavior:
      - Compares strings character by character based on ASCII values.
      - Stops comparing when it encounters the null terminator ('\0').
    - Example:
      - strcmp("Hello", "World") returns a negative value because 'H' < 'W'.
      - strcmp("Hello", "Hello") returns 0 because the strings are identical.
      - strcmp("World", "Hello") returns a positive value because 'W' > 'H'.
*/
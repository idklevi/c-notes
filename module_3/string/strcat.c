// Title: Program to Demonstrate String Concatenation Using strcat() in C
// Description: This program demonstrates how to concatenate two strings using the strcat() function.
// It initializes two character arrays (s1 and s2) with predefined strings, appends the contents of s2 to s1,
// and prints the resulting concatenated string. The program also highlights the importance of ensuring
// sufficient memory allocation in the destination string to avoid undefined behavior.

#include <stdio.h>
#include <string.h>

void main()
{
    // Step 1: Initialize the destination string (s1)
    char s1[20] = "Hello"; 
    /*
        Explanation:
        - s1 is the destination string where the concatenation result will be stored.
        - It is initialized with "Hello" and has enough space (20 bytes) to hold the concatenated result.
        - Initially, s1 contains: 'H', 'e', 'l', 'l', 'o', and a null terminator ('\0').
    */

    // Step 2: Initialize the source string (s2)
    char s2[10] = "World"; 
    /*
        Explanation:
        - s2 is the source string that will be appended to the destination string (s1).
        - It is initialized with "World".
        - s2 contains: 'W', 'o', 'r', 'l', 'd', and a null terminator ('\0').
        - The source string remains unchanged after concatenation.
    */

    // Step 3: Concatenate s2 to s1 using strcat()
    strcat(s1, s2); 
    /*
        Explanation:
        - strcat() appends the source string (s2) to the end of the destination string (s1).
        - It starts copying characters from s2 to the position of the null terminator in s1.
        - After concatenation, s1 becomes "HelloWorld" (no space between "Hello" and "World").
        - A new null terminator is automatically added at the end of the concatenated string.
    */

    // Step 4: Print the concatenated result
    printf("After concatenation: %s", s1); 
    /*
        Explanation:
        - The printf() function displays the final value of s1 after concatenation.
        - Output: "After concatenation: HelloWorld"
    */
}

/*
    Key Points About strcat():
    - Purpose: strcat() concatenates two strings by appending the source string to the destination string.
    - Syntax: strcat(destination, source).
    - Behavior:
      - The destination string is modified directly to include the appended content.
      - The source string remains unchanged.
      - A null terminator is automatically added at the end of the concatenated string.
    - Memory Allocation:
      - The destination string must have enough allocated space to hold both its original content and the
        appended content from the source string. If not, it can lead to undefined behavior or memory corruption.
      - In this example, s1 has 20 bytes of space, which is sufficient for "Hello" (5 characters), "World"
        (5 characters), and the null terminator ('\0').
    - Notes:
      - Destination String (s1):
        - Must have sufficient space to hold the concatenated result.
        - In this case, s1 has enough space to store "HelloWorld" and the null terminator.
      - Source String (s2):
        - Provides the content to be appended to the destination string.
        - Remains unchanged after the operation.
*/
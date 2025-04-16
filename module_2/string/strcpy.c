// Title: Program to Demonstrate String Copying Using strcpy() in C
// Description: This program demonstrates how to copy one string into another using the strcpy() function.
// It initializes two character arrays (s1 and s2), copies the content of s2 into s1, and prints the result.

#include <stdio.h>
#include <string.h>

void main()
{
    // Step 1: Declare an empty character array s1 with size 30
    char s1[30]; 
    /*
        Explanation:
        - s1 is the destination string where the content of s2 will be copied.
        - It is initially empty but has enough space (30 bytes) to hold the copied content.
    */

    // Step 2: Initialize string s2 with "Hello World"
    char s2[30] = "Hello World"; 
    /*
        Explanation:
        - s2 is the source string whose content will be copied to s1.
        - It contains "Hello World" and a null terminator ('\0') at the end.
    */

    // Step 3: Copy the content of s2 into s1 using strcpy()
    strcpy(s1, s2); 
    /*
        Explanation:
        - strcpy() copies all characters from s2 (including the null terminator) into s1.
        - After the operation, s1 becomes "Hello World".
    */

    // Step 4: Print the content of s1
    printf("String s1: %s", s1); 
    /*
        Explanation:
        - The printf() function displays the final value of s1 after copying.
        - Output: "String s1: Hello World"
    */
}

/*
    Key Points About strcpy():
    - Purpose: Copies the content of the source string (s2) into the destination string (s1).
    - Syntax: strcpy(destination, source).
    - Behavior:
      - Modifies the destination string directly.
      - The source string remains unchanged.
      - Automatically adds a null terminator ('\0') at the end of the destination string.
    - Memory Allocation:
      - The destination string must have enough allocated space to hold the entire source string,
        including the null terminator. If not, it can lead to undefined behavior or memory corruption.
      - In this example, s1 has 30 bytes of space, which is sufficient for "Hello World" and the null terminator.
*/
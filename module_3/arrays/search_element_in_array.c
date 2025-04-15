// Title: Program to Search an Element in an Array of Size n
// Description: This program reads the size of an array (n) and its elements from the user.
// It then searches for a specific element in the array and displays its index if found.
// If the element is not found, it informs the user accordingly.
// The array can hold up to 20 elements, but only the first n elements are used.

#include<stdio.h>

void main()
{
    int n, A[20], i, index, key; // Declare variables: n for array size, A[20] for the array, i for loop control, index for storing the result, and key for the search element

    printf("Enter the size of Array: "); // Prompt the user to enter the size of the array
    scanf("%d", &n); // Read the size of the array from the user and store it in variable n

    for(i = 0; i < n; i++) // Loop to input elements into the array
    {
        printf("Enter the number: "); // Prompt the user to enter an element
        scanf("%d", &A[i]); // Read the element and store it in the ith position of the array
    }

    printf("Enter the element to search: "); // Prompt the user to enter the element to search
    scanf("%d", &key); // Read the search element and store it in variable key

    index = -1; // Initialize index to -1 (indicating "not found" initially)
    for(i = 0; i < n; i++) // Loop to search for the element in the array
    {
        if(A[i] == key) // Check if the current element matches the search element
        {
            index = i; // Store the index of the found element
            break; // Exit the loop early since the element is found
        }
    }

    if(index == -1) // Check if the element was not found
    {
        printf("No search element found\n"); // Inform the user that the element was not found
    }
    else // If the element was found
    {
        printf("Search Element found at index %d\n", index); // Display the index where the element was found
    }
}
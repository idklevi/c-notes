// Title: Program to Read and Display an Array of Size n in Reverse Order
// Description: This program reads the size of an array (n) and its elements from the user.
// It then displays the elements of the array in reverse order.
// The array can hold up to 20 elements, but only the first n elements are used.

#include<stdio.h>

void main()
{
    int n, A[20], i; // Declare variables: n for array size, A[20] for the array, and i for loop control

    printf("Enter the size of Array: "); // Prompt the user to enter the size of the array
    scanf("%d", &n); // Read the size of the array from the user and store it in variable n

    for(i = 0; i < n; i++) // Loop to input elements into the array
    {
        printf("Enter the number: "); // Prompt the user to enter an element
        scanf("%d", &A[i]); // Read the element and store it in the ith position of the array
    }

    printf("\nThe array in reverse order is:\n"); // Inform the user that the reverse order will be displayed
    for(i = n - 1; i >= 0; i--) // Loop to display the elements of the array in reverse order
    {
        printf("%d\t", A[i]); // Print each element of the array with a tab space (\t) for better formatting
    }

    printf("\n"); // Add a newline at the end for better formatting
}
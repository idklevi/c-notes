// Title: Program to Sort Elements in an Array of Size n
// Description: This program reads the size of an array (n) and its elements from the user.
// It then sorts the elements of the array in ascending order using the Bubble Sort algorithm.
// The array can hold up to 20 elements, but only the first n elements are used.

#include<stdio.h>

void main()
{
    int n, A[20], i, j, temp; // Declare variables: n for array size, A[20] for the array, i and j for loop control, and temp for swapping

    printf("Enter the size of Array: "); // Prompt the user to enter the size of the array
    scanf("%d", &n); // Read the size of the array from the user and store it in variable n

    for(i = 0; i < n; i++) // Loop to input elements into the array
    {
        printf("Enter the number: "); // Prompt the user to enter an element
        scanf("%d", &A[i]); // Read the element and store it in the ith position of the array
    }

    printf("\nBefore Sorting:\n"); // Display the array before sorting
    for(i = 0; i < n; i++)
    {
        printf("%d\t", A[i]); // Print each element with a tab space (\t) for better formatting
    }

    // Bubble Sort Algorithm to sort the array in ascending order
    for(i = 0; i < n - 1; i++) // Outer loop for passes
    {
        for(j = 0; j < n - i - 1; j++) // Inner loop for comparisons
        {
            if(A[j] > A[j + 1]) // If the current element is greater than the next element
            {
                // Swap the elements
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    printf("\nAfter Sorting:\n"); // Display the array after sorting
    for(i = 0; i < n; i++)
    {
        printf("%d\t", A[i]); // Print each element with a tab space (\t) for better formatting
    }

    printf("\n"); // Add a newline at the end for better formatting
}
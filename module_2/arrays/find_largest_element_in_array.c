// Title: Program to Find the Largest Element in an Array of Size n
// Description: This program reads the size of an array (n) and its elements from the user.
// It then finds and displays the largest element in the array.
// The array can hold up to 20 elements, but only the first n elements are used.

#include<stdio.h>

void main()
{
    int n, A[20], i, large; // Declare variables: n for array size, A[20] for the array, i for loop control, and large for the largest element

    printf("Enter the size of Array: "); // Prompt the user to enter the size of the array
    scanf("%d", &n); // Read the size of the array from the user and store it in variable n

    for(i = 0; i < n; i++) // Loop to input elements into the array
    {
        printf("Enter the number: "); // Prompt the user to enter an element
        scanf("%d", &A[i]); // Read the element and store it in the ith position of the array
    }

    large = A[0]; // Initialize the largest element with the first element of the array
    for(i = 0; i < n; i++) // Loop to find the largest element in the array
    {
        if(large < A[i]) // Check if the current element is greater than the current largest
        {
            large = A[i]; // Update the largest element
        }
    }

    printf("Largest Element = %d\n", large); // Display the largest element
}
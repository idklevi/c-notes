// Title: Program to Read and Display Even Numbers in an Array of Size n
// Description: This program reads the size of an array (n) and its elements from the user.
// It then displays only the even numbers from the array.
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

    printf("\nThe even numbers in the array are:\n"); // Inform the user that even numbers will be displayed
    for(i = 0; i < n; i++) // Loop to check and display even numbers
    {
        if(A[i] % 2 == 0) // Check if the current element is even
        {
            printf("%d\t", A[i]); // Print the even number with a tab space (\t) for better formatting
        }
    }

    printf("\n"); // Add a newline at the end for better formatting
}
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

    for(i = 0; i < n; i++) // Loop to display the elements of the array
    {
        printf("%d\t", A[i]); // Print each element of the array with a tab space (\t) for better formatting
    }

    printf("\n"); // Add a newline at the end for better formatting
}
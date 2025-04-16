// Title: Program to Calculate the Sum and Average of an Array of Size n
// Description: This program reads the size of an array (n) and its elements from the user.
// It then calculates and displays the sum and average of the array elements.
// The array can hold up to 20 elements, but only the first n elements are used.

#include<stdio.h>

void main()
{
    int n, A[20], i, sum; // Declare variables: n for array size, A[20] for the array, i for loop control, and sum for total
    float avg; // Declare variable for average

    printf("Enter the size of Array: "); // Prompt the user to enter the size of the array
    scanf("%d", &n); // Read the size of the array from the user and store it in variable n

    for(i = 0; i < n; i++) // Loop to input elements into the array
    {
        printf("Enter the number: "); // Prompt the user to enter an element
        scanf("%d", &A[i]); // Read the element and store it in the ith position of the array
    }

    sum = 0; // Initialize sum to 0 before calculating the total
    for(i = 0; i < n; i++) // Loop to calculate the sum of the array elements
    {
        sum = sum + A[i]; // Add the current array element (A[i]) to the sum
    }

    avg = (float)sum / n; // Calculate the average by dividing the sum by the number of elements (convert sum to float for precision)

    printf("Sum = %d\n", sum); // Display the sum of the array elements
    printf("Average = %.2f\n", avg); // Display the average with 2 decimal places
}
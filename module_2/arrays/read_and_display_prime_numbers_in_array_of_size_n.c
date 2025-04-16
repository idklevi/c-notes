// Program to read and display prime numbers in an array of size n

#include <stdio.h>

void main() {
    int n, A[20], i, flag, j;

    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input elements into the array
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Display the prime numbers in the array
    printf("\nThe prime numbers in the array are: ");

    // Loop through each element in the array
    for (i = 0; i < n; i++) {
        flag = 0; // Reset flag for each element

        // Numbers less than 2 are not prime
        if (A[i] < 2) {
            flag = 1; // Mark as not prime
        } else {
            // Check divisors from 2 to A[i] / 2
            for (j = 2; j <= A[i] / 2; j++) {
                if (A[i] % j == 0) { // If divisible, mark as not prime
                    flag = 1;
                    break; // Exit loop early
                }
            }
        }

        // If flag is still 0, the number is prime
        if (flag == 0) {
            printf("%d ", A[i]); // Print the prime number
        }
    }

    printf("\n"); // Add a newline for better formatting
}
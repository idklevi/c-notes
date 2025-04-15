// Title: Program to Read and Display an Array of Size n
// Description: This program reads the size of an array (n) and its elements from the user.
// It then displays the elements of the array with tab spaces for better formatting.
// The array can hold up to 20 elements, but only the first n elements are used.

#include<stdio.h>

void main()
{
    int n, A[20], i;

    printf("Enter the size of Array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &A[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }

    printf("\n");
}
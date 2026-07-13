/*
Problem: Write a program to find the maximum and minimum values present in a given array of integers.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the maximum and minimum elements

Example:
Input:
6
3 5 1 9 2 8

Output:
Max: 9
Min: 1
*/
#include <stdio.h>

int main() {
    int n;

   printf("enter the no of element you want to enter in an array:");
    scanf("%d", &n);

    int arr[n];

    printf("enter the element in an array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is both max and min
    int max = arr[0];
    int min = arr[0];

    // Find maximum and minimum
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("the max and min eleme4nts are:\n");
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}

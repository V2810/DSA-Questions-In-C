/*
Problem: Given an array of integers, rotate the array to the right by k positions.

Input:
- First line: integer n
- Second line: n integers
- Third line: integer k

Output:
- Print the rotated array

Example:
Input:
5
1 2 3 4 5
2

Output:
4 5 1 2 3
*/
#include <stdio.h>

int main() {
    int n;
    printf("enter the how many elements you want to enter:");
    scanf("%d", &n);

    int arr[n];
    
    printf("enter the element for an array:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("enter the value for k from where the array will rotate:");
    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    int temp[n];

    // Copy last k elements to the beginning
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy remaining elements
    for (int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }

    printf("array after rotating:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}

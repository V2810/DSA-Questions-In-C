/*
Problem: Given an array of integers, find two elements whose sum is closest to zero.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the pair of elements whose sum is closest to zero

Example:
Input:
5
1 60 -10 70 -80

Output:
-10 1

Explanation: Among all possible pairs, the sum of -10 and 1 is -9, which is the closest to zero compared to other pairs.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("enter the how many elements you want to enter:");
    scanf("%d", &n);

    int arr[n];
    printf("enter the element for an array:\n");
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minSum = abs(arr[0] + arr[1]);
    int first = arr[0], second = arr[1];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = abs(arr[i] + arr[j]);

            if (sum < minSum) {
                minSum = sum;
                first = arr[i];
                second = arr[j];
            }
        }
    }
    printf("the pair of elements whose sum is closest to zero:\n");

    printf("%d %d\n", first, second);

    return 0;
}

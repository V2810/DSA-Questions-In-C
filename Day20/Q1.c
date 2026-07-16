/*
Problem: Given an array of integers, count the number of subarrays whose sum is equal to zero.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the count of subarrays having sum zero

Example:
Input:
6
1 -1 2 -2 3 -3

Output:
6

Explanation: A subarray is a continuous part of the array. For the input array 1 -1 2 -2 3 -3, the following subarrays have sum zero: [1, -1], [2, -2], [3, -3], [1, -1, 2, -2], [2, -2, 3, -3], and [1, -1, 2, -2, 3, -3]. Since there are 6 such subarrays, the output is 6.
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100003

typedef struct Node {
    long long sum;
    int count;
    struct Node *next;
} Node;

Node *hashTable[SIZE];

int hash(long long key) {
    if (key < 0)
        key = -key;
    return key % SIZE;
}

int getCount(long long sum) {
    int idx = hash(sum);
    Node *temp = hashTable[idx];

    while (temp != NULL) {
        if (temp->sum == sum)
            return temp->count;
        temp = temp->next;
    }
    return 0;
}

void addSum(long long sum) {
    int idx = hash(sum);
    Node *temp = hashTable[idx];

    while (temp != NULL) {
        if (temp->sum == sum) {
            temp->count++;
            return;
        }
        temp = temp->next;
    }

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->sum = sum;
    newNode->count = 1;
    newNode->next = hashTable[idx];
    hashTable[idx] = newNode;
}

int main() {
    int n;
    scanf("%d", &n);

    long long prefixSum = 0;
    long long result = 0;
        prefixSum += x;
        addSum(prefixSum);
    }

    printf("%lld\n", result);

    return 0;
}
        result += getCount(prefixSum);


        scanf("%d", &x);


    for (int i = 0; i < n; i++) {
        int x;


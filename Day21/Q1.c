/*
Problem: Create and Traverse Singly Linked List

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the result

Example:
Input:
5
10 20 30 40 50

Output:
10 20 30 40 50
*/
#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    int n, value;
    printf("enter he no of element you want to put in linklist:\n");

    scanf("%d", &n);

    struct Node *head = NULL;
    struct Node *tail = NULL;

    printf("enter he element or link list:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);

        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    printf("the elements are:\n");
    struct Node *current = head;

    while (current != NULL) {
        printf("%d", current->data);

        if (current->next != NULL) {
            printf(" ");
        }

        current = current->next;
    }

    // Free allocated memory
    current = head;
    while (current != NULL) {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

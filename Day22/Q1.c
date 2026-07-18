/*
Problem: Count Nodes in Linked List

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

struct Node {
    int data;
    struct Node *next;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    printf("Created Node with data = %d\n", data);

    return newNode;
}

// Count nodes in the linked list
int countNodes(struct Node* head) {
    int count = 0;

    printf("\nTraversing the Linked List:\n");

    while (head != NULL) {
        printf("Visited Node with data = %d\n", head->data);
        count++;
        head = head->next;
    }

    printf("Total Nodes Counted = %d\n", count);

    return count;
}

int main() {

    int n;
    scanf("%d", &n);

    struct Node *head = NULL;
    struct Node *tail = NULL;

    printf("Creating Linked List...\n");

    for (int i = 0; i < n; i++) {

        int x;
        scanf("%d", &x);

        struct Node* newNode = createNode(x);

        if (head == NULL) {
    return 0;
}            head = newNode;
            tail = newNode;
    printf("\nAnswer = %d\n", ans);


    int ans = countNodes(head);


            printf("Head initialized with %d\n", x);
    }

            printf("Inserted %d at the end\n", x);
        }
        }
        else {

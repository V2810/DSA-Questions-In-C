/*
Problem: Delete First Occurrence of a Key - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer key

Output:
- Print the linked list elements after deletion, space-separated

Example:
Input:
5
10 20 30 40 50
30

Output:
10 20 40 50

Explanation:
Traverse list, find first node with key, remove it by adjusting previous node's next pointer.
*/
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int value)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to print linked list
void printList(struct Node *head)
{
    struct Node *temp = head;

    printf("Linked List: ");

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

// Function to delete first occurrence of key
struct Node* deleteKey(struct Node *head, int key)
{
    struct Node *temp = head;
    struct Node *prev = NULL;

    // Case 1: First node contains the key
    if(temp != NULL && temp->data == key)
    {
        head = temp->next;
        free(temp);
        return head;
    }

    // Traverse the list
    while(temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // Key not found
    if(temp == NULL)
    {
        printf("Key not found!\n");
        return head;
    }

    // Delete node
    prev->next = temp->next;
    free(temp);

    return head;
}

int main()
{
    int n, value, key;

    struct Node *head = NULL;
    struct Node *tail = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &value);

        struct Node *newNode = createNode(value);

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    printf("Original ");
    printList(head);

    printf("Enter key to delete: ");
    scanf("%d", &key);

    head = deleteKey(head, key);

    printf("Linked List after deletion: ");
    printList(head);

    return 0;
}

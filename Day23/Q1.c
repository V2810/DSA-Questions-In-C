/*
Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers (first list)
- Third line: integer m
- Fourth line: m space-separated integers (second list)

Output:
- Print the merged linked list elements, space-separated

Example:
Input:
5
10 20 30 40 50
4
15 25 35 45

Output:
10 15 20 25 30 35 40 45 50

Explanation:
Compare nodes of both lists, append smaller to result, continue until all nodes are merged.
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
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at end
struct Node *insertEnd(struct Node *head, int data)
{
    struct Node *newNode = createNode(data);

    if (head == NULL)
        return newNode;

    struct Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
    struct Node *tail = &dummy;

    dummy.next = NULL;

    while (head1 != NULL && head2 != NULL)
    {
{
    struct Node *merged = NULL;
    printf("Enter number of elements in First List: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &value);
        head1 = insertEnd(head1, value);

    // Input second list
    scanf("%d", &m);

    printf("Enter %d sorted elements:\n", m);
    for (i = 0; i < m; i++)
        scanf("%d", &value);
        head2 = insertEnd(head2, value);
    }
    // Print both lists
    printf("\nFirst Linked List: ");
    printList(head1);

    printf("Second Linked List: ");
    printList(head2);

    // Output
}
    return 0;
    printf("\nMerged Linked List: ");
    printList(merged);

    // Merge
    printf("\nMerging the two sorted linked lists...\n\n");
    merged = mergeLists(head1, head2);

    {
    printf("Enter number of elements in Second List: ");
    }
    {
    printf("Enter %d sorted elements:\n", n);

    // Input first list
    int n, m, i, value;
    struct Node *head1 = NULL;
    struct Node *head2 = NULL;


int main()
    return dummy.next;
}
}
        head2 = head2->next;
    }
    {
        printf("Adding remaining %d from Second List\n", head2->data);
        tail->next = head2;
        tail = tail->next;

    while (head2 != NULL)
        tail->next = head1;
        tail = tail->next;
        head1 = head1->next;
    }
        if (head1->data <= head2->data)
        {
        tail = tail->next;
    {
        printf("Adding remaining %d from First List\n", head1->data);
    }

    while (head1 != NULL)
            head1 = head1->next;
        }
        }

        else
        {
            printf("Taking %d from Second List\n", head2->data);
            tail->next = head2;
            head2 = head2->next;
            printf("Taking %d from First List\n", head1->data);
            tail->next = head1;
// Function to merge two sorted linked lists
    struct Node dummy;
struct Node *mergeLists(struct Node *head1, struct Node *head2)
{


// Function to print linked list
    printf("\n");
}
void printList(struct Node *head)
    }
        printf("%d ", temp->data);
        temp = temp->next;
    struct Node *temp = head;
    {

    while (temp != NULL)


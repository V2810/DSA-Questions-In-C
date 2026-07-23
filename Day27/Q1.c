/*
Problem: Find Intersection Point of Two Linked Lists - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers (first list)
- Third line: integer m
- Fourth line: m space-separated integers (second list)

Output:
- Print value of intersection node or 'No Intersection'

Example:
Input:
5
10 20 30 40 50
4
15 25 30 40 50

Output:
30

Explanation:
Calculate lengths, advance pointer in longer list, traverse both simultaneously. First common node is intersection.
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
    return newNode;
}

// Insert at end
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Print linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Find first common value
int findIntersection(struct Node* head1, struct Node* head2) {
    struct Node *p1, *p2;

    for (p1 = head1; p1 != NULL; p1 = p1->next) {
        for (p2 = head2; p2 != NULL; p2 = p2->next) {
            if (p1->data == p2->data)
                return p1->data;
        }
    }

    return -1;
}

int main() {
    int n, m, x;
    struct Node *head1 = NULL, *head2 = NULL;

    printf("input how many elements you wan in first list:\n");
    scanf("%d", &n);
    printf("emter elements for second link list:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        insertEnd(&head1, x);
    }

   printf("input how many elements you wan in second list:\n");
    scanf("%d", &m);
    printf("emter elements for second link list:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        insertEnd(&head2, x);
    }

    // Print both lists
    printf("First Linked List: ");
    printList(head1);

    printf("Second Linked List: ");
    printList(head2);

    // Find intersection
    int ans = findIntersection(head1, head2);

    if (ans == -1)
        printf("No Intersection\n");
    else
        printf("Intersection Node Value: %d\n", ans);

    return 0;
}

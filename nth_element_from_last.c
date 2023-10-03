#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head_ref, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    new_node->data = data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
    } else {
        struct Node* last = *head_ref;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
    }
}

struct Node* findNthFromEnd(struct Node* head, int n) {
    if (head == NULL || n <= 0) {
        fprintf(stderr, "Invalid input\n");
        exit(1);
    }

    struct Node* fast = head;
    struct Node* slow = head;

    for (int i = 0; i < n; i++) {
        if (fast == NULL) {
            fprintf(stderr, "N is larger than the list size\n");
            exit(1);
        }
        fast = fast->next;
    }

    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);

    printf("Linked List: ");
    printList(head);

    int n = 3;
    struct Node* result = findNthFromEnd(head, n);

    if (result != NULL) {
        printf("The %dth node from the end is: %d\n", n, result->data);
    }

    freeList(head); // Free memory
    return 0;
}
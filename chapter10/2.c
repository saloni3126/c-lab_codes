#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertAtEnd(struct Node **head, int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void insertInMiddle(struct Node *head, int data, int position) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node *temp = head;
    int i = 1;
    while (i < position - 1 && temp != NULL) {
        temp = temp->next;
        i++;
    }
    if (temp == NULL) return;
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    struct Node *head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);

    printf("Before insertion: ");
    printList(head);

    insertInMiddle(head, 30, 3);

    printf("After insertion: ");
    printList(head);

    return 0;
}


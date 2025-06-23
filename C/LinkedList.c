#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
      }
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (newNode) {
        newNode->next = *head;
        *head = newNode;
}
}
void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
void freeList(struct Node* head) {
    struct Node* tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
int main() {
struct Node* head = NULL;
insertAtBeginning(&head, 10);
 insertAtBeginning(&head, 20);
insertAtBeginning(&head, 30);

printf("Linked List: ");
displayList(head);
freeList(head);

    return 0;
}

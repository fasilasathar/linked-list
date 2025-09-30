#include <stdio.h>
#include <stdlib.h>
struct Node{
    int rollNumber;
    struct Node* next;
};
struct Node* createNode(int rollNumber){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->rollNumber = rollNumber;
    newNode->next = NULL;
    return newNode;
}
void insertNode(struct Node** head, int rollNumber){
    struct Node* newNode = createNode(rollNumber);
    if (*head == NULL){
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void displayList(struct Node* head){
    struct Node* temp = head;
    printf("Roll Numbers in Linked List:");

    while (temp != NULL){
        printf("%d", temp->rollNumber);
        if (temp->next != NULL){
            printf(" -> ");
        }
        temp = temp->next;
    }

    printf("\n");
}
int main(){
    struct Node* head = NULL;
    insertNode(&head, 291);
    insertNode(&head, 292);
    insertNode(&head, 293);
    insertNode(&head, 294);
    displayList(head);
    return 0;
}

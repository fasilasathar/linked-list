#include<stdio.h>
#include<stdlib.h>
struct Node{
    int rollNo;
    struct Node* next;
} Node;
Node* createNode(int rollNo){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->rollNo = rollNo;
    newNode->next = NULL;
    return newNode;
}
void insertNode(Node** head, int rollNo){
    Node* newNode = createNode(rollNo);
    if (*head == NULL){
        *head = newNode;
    }else{
        Node* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}
void displayList(Node* head){
    printf("Roll Numbers in Linked List: ");
    Node* temp = head;
    while (temp != NULL){
        printf("%d", temp->rollNo);
        if (temp->next != NULL) printf(" → ");
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    Node* head = NULL;
    insertNode(&head, 29);
    insertNode(&head, 24);
    insertNode(&head, 39);
    insertNode(&head, 52);
    displayList(head);
    return 0;
}

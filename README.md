# README

---

# D.S-Assignment

## Linked List Team Project – `<codeconnectors>`

---

##  Overview

This project is part of *CO3 – Data Structures Lab (S3, INMCA2024-29)*.
It demonstrates:

* ✅ Implementation of a **Singly Linked List** in C
* ✅ Collaborative development using **GitHub** (branches, commits, pull requests)
* ✅ Visualization of linked list operations using **Figma**
* ✅ Team collaboration & reporting

---

##  Singly Linked List Program

The C program creates a singly linked list using integer roll numbers.
It supports:

* Insertion at the end
* Traversal to display roll numbers in order

---

### ✅ Code Snippet

```c
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
    insertNode(&head, 24);
    insertNode(&head, 29);
    insertNode(&head, 39);
    insertNode(&head, 52);
    displayList(head);
    return 0;
}
```

---

###  Sample Output

```
Roll Numbers in Linked List : 24 -> 29 -> 39 -> 52
```

---

Team Workflow — Single Linked List Project

Branching Strategy

The team used a function-based branching model where each major linked list operation was developed on its own branch. Branches were named using the format:

linkedlist/<function-name>

Examples:

linkedlist/insert-at-beginning

linkedlist/delete-node

linkedlist/reverse

linkedlist/display

This made it easy to track contributions and isolate changes by functionality.

Task Distribution

Each team member was assigned one or more linked list functions to implement or optimize, such as:

Node creation

Insertion (at beginning, middle, end)

Deletion (by value, position)

Search

Reverse

Display

Length calculation

Contribution Process

Pull the latest changes from the main branch.

Create a new branch for the assigned function:

git checkout -b linkedlist/<function-name>

Implement and test the function locally.

Commit the changes with a clear message:

git commit -m "Implemented <function-name> for Single Linked List"

Push the branch to the remote repository.

Create a Pull Request (PR) to merge into main.

Request peer review and resolve any conflicts or feedback.

Once approved, merge the PR into the main branch.

Testing and Integration

All functions were tested individually.

After merging, the integrated linked list was tested as a whole.

Edge cases (e.g. deleting from an empty list, inserting into an empty list) were considered.

##  Figma Diagram

###  Purpose:

To visually represent:

* **Node structure** (`data`, `next`)
* **Insertion logic** (sequential linking)
* **Traversal flow**

###  Diagram Preview:

![Figma Diagram](https://github.com/fasilasathar/linked-list/blob/main/29%2039%2052%2024.png)

###  Public Figma Link:

[Click here to view in Figma](https://www.figma.com/design/MQY2hudHYceVL7jgJ4UWUP/Untitled?node-id=0-1&p=f&t=itOqAj1MgsiVVFul-0)

---

##  Final Report

The final report includes:

* ✅ Figma Diagram + Screenshot

* ✅ Final working code + output

* ✅ Contributions + Reflection

* 📄 [Download Report (PDF)](https://github.com/fasilasathar/linked-list/blob/main/Report%20Final%2024%2029%2039%2052.pdf)

---

##  Team Contributions

| Member         | Roll No | GitHub Contribution                              |
| -------------- | ------- | ------------------------------------------------ |
| Fasila Sathar  | 29      | Created repository structure + Managed issues    |
| Mariya Joseph  | 39      | Implemented CI workflows + Branch protection     |
| Devanandha P S | 24      | Designed README.md + Added project wiki pages    |
| Sara Paul      | 52      | Reviewed PRs + Managed labels & milestones       |

---

 Reflection

    ⦾ Grasped the concept of node-based memory allocation and how pointers link data in C

    ⦾ Implemented and debugged multiple insertion scenarios to strengthen problem-solving skills

    ⦾ Explored the workflow of open-source collaboration through GitHub commits and pull reviews

    ⦾ Created clean and readable documentation using Markdown and collaborative tools

    ⦾ Learned to plan and divide tasks efficiently within the team using milestones and issue tracking

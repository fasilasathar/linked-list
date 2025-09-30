# README

---

# D.S-Assignment

## Linked List Team Project – `<codeconnectors>`

---

## 📌 Overview

This project is part of *CO3 – Data Structures Lab (S3, INMCA2024-29)*.
It demonstrates:

* ✅ Implementation of a **Singly Linked List** in C
* ✅ Collaborative development using **GitHub** (branches, commits, pull requests)
* ✅ Visualization of linked list operations using **Figma**
* ✅ Team collaboration & reporting

---

## 🖥 Singly Linked List Program

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

### 🧪 Sample Output

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

## 🎨 Figma Diagram

### 📌 Purpose:

To visually represent:

* **Node structure** (`data`, `next`)
* **Insertion logic** (sequential linking)
* **Traversal flow**

### 🖼 Diagram Preview:

![Figma Diagram](https://github.com/Lynx2006/linked-list-team--Data-Structure-/blob/main/DS%20ASSSS.png)

### 🔗 Public Figma Link:

[Click here to view in Figma](https://www.figma.com/design/wL9ApNJinsTEoBF7WwcrJj/Untitled?node-id=0-1&p=f&t=qwyHAVfWOLBaK265-0)

---

## 📑 Final Report

The final report includes:

* 📌 GitHub Repository: [View Repo](https://github.com/Lynx2006/linked-list-team--Data-Structure-)

* ✅ Figma Diagram + Screenshot

* ✅ Final working code + output

* ✅ Contributions + Reflection

* 📄 [Download Report (PDF)](https://github.com/Lynx2006/linked-list-team--Data-Structure-/blob/main/Report.pdf)

* 📄 [Download Report (DOCX)](https://github.com/Lynx2006/linked-list-team--Data-Structure-/blob/main/Report.docx)

---

## 👥 Team Contributions

| Member         | Roll No | Contribution                         |
| -------------  | ------- | -----------------------------------  |
| Fasila Sathar  | 29      | Main code logic + display function   |
| Mariya Joseph  | 39      | Insertion function                   |
| Devanandha P S | 24      | Figma diagram + Report formatting    |
| Sara Paul      | 52      | Git52ub setup + Pull request reviews |

---

## ✨ Reflection

* 👨‍💻 Understood how singly linked lists manage dynamic memory and pointers
* ✅ Practiced key list operations: **insert** and **traverse**
* 🔁 Learned how to **collaborate using GitHub**, use **branches**, and manage **pull requests**
* 🎨 Visualized data structures using **Figma**, making debugging and team understanding easier
* 🤝 Gained experience in structured **teamwork**, communication, and documentation

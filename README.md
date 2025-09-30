Sure! Here's the updated version of your project README and documentation with **generic team member names**:

* `291` → Your Roll Number
* `292` → Team Member 1
* `293` → Team Member 2
* `294` → Team Member 3
* (Optional: Team Member 4 if needed — let me know if you want to include them)

---

# ✅ Final README (Updated with Generic Names)

---

# D.S-Assignment-1

## Linked List Team Project – `<TeamName>`

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

struct Node {
    int rollNumber;
    struct Node* next;
};

struct Node* createNode(int rollNumber) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->rollNumber = rollNumber;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct Node** head, int rollNumber) {
    struct Node* newNode = createNode(rollNumber);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("Roll Numbers in Linked List: ");
    while (temp != NULL) {
        printf("%d", temp->rollNumber);
        if (temp->next != NULL) {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insert roll numbers (example)
    insertNode(&head, 291);  // Your Roll Number
    insertNode(&head, 292);  // Team Member 1
    insertNode(&head, 293);  // Team Member 2
    insertNode(&head, 294);  // Team Member 3

    displayList(head);
    return 0;
}
```

---

### 🧪 Sample Output

```
Roll Numbers in Linked List: 291 -> 292 -> 293 -> 294
```

---

## 🔀 Team Workflow

### 📁 Branching Strategy

Each team member worked on a **Git branch named after their roll number**, allowing independent development and easy pull request management.

### 🚀 Contribution Process

Each teammate contributed by:

* Writing or improving a specific function
* Committing changes to their branch
* Creating a **pull request (PR)** to merge with `main`
* Participating in conflict resolution if needed

---

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

| Member        | Roll No | Contribution                        |
| ------------- | ------- | ----------------------------------- |
| You           | 291     | Main code logic + display function  |
| Team Member 1 | 292     | Insertion function                  |
| Team Member 2 | 293     | Figma diagram + Report formatting   |
| Team Member 3 | 294     | GitHub setup + Pull request reviews |

---

## ✨ Reflection

* 👨‍💻 Understood how singly linked lists manage dynamic memory and pointers
* ✅ Practiced key list operations: **insert** and **traverse**
* 🔁 Learned how to **collaborate using GitHub**, use **branches**, and manage **pull requests**
* 🎨 Visualized data structures using **Figma**, making debugging and team understanding easier
* 🤝 Gained experience in structured **teamwork**, communication, and documentation

---

Would you like:

* A downloadable `README.md` file?
* Final DOCX/PDF report version?
* Editable contribution table for your actual names?

Just let me know, and I’ll prepare it.


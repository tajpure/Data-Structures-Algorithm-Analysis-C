#include <stdio.h>
#include <stdlib.h>

//
typedef struct node {
    int data;
    struct node *next;
} Node, *List;

typedef struct dnode {
    int data;
    struct node *pre;
    struct node *next;
} DNode, *DList;

void init(List list, int size) {
    int i = 0;
    Node* head = list;
    while (i < size) {
        Node *p = (Node *)malloc(sizeof(Node));
        p->data = i;
        head->next = p;
        p->next = NULL;
        head = p;
        i++;
    }
}

void initD(DList list, int size) {
    int i = 0;
    DNode* cur = list;
    while (i < size) {
        DNode *p = (DNode *)malloc(sizeof(DNode));
        p->data = i;
        cur->next = p;
        p->next = NULL;
        cur = p;
        i++;
    }
}

void free_list(List list) {
    Node* p = list->next;
    while (p->next != NULL) {
        Node* tmp = p;
        p = p->next;
        free(tmp);
    }
    free(list);
    free(p);
}

// void

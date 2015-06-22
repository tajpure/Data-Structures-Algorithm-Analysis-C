#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node, *List;

/*Initialize the list*/
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

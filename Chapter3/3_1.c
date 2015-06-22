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

void print_linklist(List list) {
    Node* p = list->next;
    while (p->next != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }

    printf("%d\n", p->data);
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

int main() {
    List list = (Node *)malloc(sizeof(Node));

    list->data = -1;
    list->next = NULL;

    init(list, 10);
    print_linklist(list);
    free_list(list);

    return 0;
}

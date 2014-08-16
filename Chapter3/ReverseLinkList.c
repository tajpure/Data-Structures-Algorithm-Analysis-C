#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node, *List;

Node *stack = NULL;

void reverse(List list);
void reverse_without_stack(List list);
void reverse_without_node(List list);

/*Initialize the list*/
void init(List list, int size) {
    int i = 0;
    Node *head = list;
    while (i < size) {
        Node *p = (Node *)malloc(sizeof(Node));
        p->data = i;
        head->next = p;
        p->next = NULL;
        head = p;
        i++;
    }
}

void push(Node node) {
    
}

Node pop() {

}

void reverse(List list) {

}

void reverse_without_stack(List list) {

}

void reverse_without_node(List list) {

}

void print_linklist(List list) {
    Node *p = list->next;
    while (p->next != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }

    printf("%d", p->data);
}

int main() {
    List list = (Node *)malloc(sizeof(Node));
    
    list->data = -1;
    list->next = NULL;
    
    init(list, 10);
    print_linklist(list);

    return 0;
}

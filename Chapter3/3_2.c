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

void init_pos(List list) {
    int i = 2;
    int size = 6;
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

void print_lots(List list, List pos) {
      int index = 1;
      Node* ptr = list->next;
      Node* ptr_pos = pos->next;
      while (ptr->next != NULL && ptr_pos->next != NULL) {
          if (ptr_pos->data == index) {
            printf("%d ", ptr->data);
            ptr_pos = ptr_pos->next;
          }
          ptr = ptr->next;
          index++;
      }
      printf("%d\n", ptr->data);
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
    List pos = (Node *)malloc(sizeof(Node));
    list->data = -1;
    list->next = NULL;
    pos->data = -1;
    pos->next = NULL;
    init(list, 10);
    init_pos(pos);
    print_linklist(list);
    print_linklist(pos);
    print_lots(list, pos);
    free_list(list);
    free_list(pos);
    return 0;
}

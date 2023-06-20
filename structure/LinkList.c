#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;   // 4-byte
    struct Node *p;  // 8-byte
};

typedef struct Node Node;  // typedef <oldTypeName> <newTypeName>

int main(){
    Node node1;
    Node node2;
    Node node3;
    Node node4;

    node1.data = 1;
    node1.p = &node2;

    node2.data = 2;
    node2.p = &node3;

    node3.data = 3;
    node3.p = &node4;

    node4.data = 4;
    // node4.p = NULL;

    node4.p = malloc(sizeof(Node));
    node4.p->data = 5;
    node4.p->p = NULL;

    printf("%d\n", node1.data);
    printf("%d\n", (*node1.p).data); // node2.data
    printf("%d\n", (*(*node1.p).p).data);  // node3.data
    printf("%d\n", (*(*(*node1.p).p).p).data); // node4.data

    printf("______________________________________\n");
    printf("%d\n", node1.data);
    printf("%d\n", node1.p->data); // node2.data
    printf("%d\n", node1.p->p->data);  // node3.data
    printf("%d\n", node1.p->p->p->data); // node4.data

    printf("______________________________________\n");   
    Node* temp = &node1;
    while(temp != NULL) {
        printf("%d ", temp->data);
        // printf("%d ", (*temp).data); 
        temp = temp->p;
    }
    printf("\n");
}
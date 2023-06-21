#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;   // 4-byte
    struct Node *p;  // 8-byte
};

typedef struct Node Node;  // typedef <oldTypeName> <newTypeName>


// Linked list traversal
void print_nodes(Node* temp){
    while(temp != NULL) {
        printf("%d ", temp->data);
        // printf("%d ", (*temp).data); 
        temp = temp->p;
    }
    printf("\n");
}

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
    printf("Enter number for nodes required:");
    int n;
    scanf("%d",&n);
    Node* last_node = node4.p;
    for(int i=0; i<n; i++){
        int value;
        last_node->p = malloc(sizeof(Node));
        last_node = last_node->p;
        printf("Enter the value:");
        scanf("%d", &value);
        last_node->data = value;
    }
    print_nodes(&node1);

    
}


/// 1. find the given value in the linked list.
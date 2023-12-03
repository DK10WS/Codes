#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}Node;

Node* add(Node* root, int data) {
    if (root == NULL) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    if(data < root->data) {
        root->left = add(root->left, data);
    } 
    else if (data > root->data) {
        root->right = add(root->right, data);
    }

    return root;
}

void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    Node* root = NULL;
    root = add(root, 10);
    add(root, 5);
    add(root, 15);

    printf("Traversal of tree: ");
    inorderTraversal(root);

    return 0;
}


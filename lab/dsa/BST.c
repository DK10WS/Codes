#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* add(struct Node* root, int data) {
    if (root == NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
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

void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    root = add(root, 10);
    add(root, 5);
    add(root, 15);

    printf("Traversal of tree: ");
    inorderTraversal(root);

    return 0;
}


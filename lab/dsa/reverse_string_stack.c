#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char data;
    struct Node* next;
};

struct Node* push(struct Node* top, char data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = top;
    return temp;
}

struct Node* pop(struct Node* top, char* data) {
    if (top == NULL) {
        printf("Stack Underflow\n");
        *data = '\0';
        return NULL;
    }

    struct Node* temp = top;
    *data = temp->data;
    top = top->next;
    free(temp);
    return top;
}

void reverseString(char* input) {
    struct Node* stack = NULL;

    for (int i = 0; i < strlen(input); i++) {
        stack = push(stack, input[i]);
    }

    for (int i = 0; i < strlen(input); i++) {
        stack = pop(stack, &input[i]);
    }
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    reverseString(input);

    printf("Reversed string: %s\n", input);

    return 0;
}


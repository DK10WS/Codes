#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char data;
    struct Node* next;
}Node;

 Node* push( Node* top, char data) {
     Node* temp = ( Node*)malloc(sizeof( Node));
    temp->data = data;
    temp->next = top;
    return temp;
}

 Node* pop( Node* top, char* data) {
    if (top == NULL) {
        printf("Stack Underflow\n");
        *data = '\0';
        return NULL;
    }

     Node* temp = top;
    *data = temp->data;
    top = top->next;
    free(temp);
    return top;
}

void reverseString(char* input) {
     Node* stack = NULL;

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


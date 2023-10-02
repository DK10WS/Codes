#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

int Empty() {
    return top == -1;
}

int Full() {
    return top == MAX_SIZE - 1;
}

void push(int value) {
    if (Full()) {
        printf("Stack full %d\n", value);
    } 
  else {
        stack[++top] = value;
    }
}

int pop() {
    if (Empty()) {
        printf("Stack underflow: Cannot pop\n");
        return -1;
   } 
  else {
        return stack[top--];
    }
}

void display() {
    if (Empty()) {
        printf("Stack is empty.\n");
    } 
  else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(11);
    push(20);
    push(10);
    push(49);
    push(200);

    printf("After pushing elements:\n");
    display();

    int popped = pop();
    printf("Popped element: %d\n", popped);

    printf("After popping an element:\n");
    display();

    return 0;
}







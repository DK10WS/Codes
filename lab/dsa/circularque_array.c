#include <stdio.h>
#include <stdlib.h>

int arr[5];
int rear = -1;
int front = -1;
int len = 5;

void Enque(int data) {
    if ((rear + 1) % len == front) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }

    if (rear == -1 && front == -1) {
        rear = 0;
        front = 0;
        arr[rear] = data;
    } else {
        rear = (rear + 1) % len;
        arr[rear] = data;
    }
}

void Deque() {
    if (front == -1) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % len;
    }
}

void print() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        do {
            printf("%d ", arr[i]);
            i = (i + 1) % len;
        } while (i != (rear + 1) % len);
        printf("\n");
    }
}

int main() {
    Enque(10);
    Enque(20);
    Enque(30);
    Enque(40);
    Enque(50);
    print();

    printf("\nAfter deque\n");
    Deque();
    print();

    printf("\nAfter Enque again:\n");
    Enque(60);
    print();

    return 0;
}


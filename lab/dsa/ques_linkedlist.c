#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* head;
    struct Node* tail;
};

struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->head = NULL;
    queue->tail = NULL;
    return queue;
}

void enqueue(struct Queue* queue, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (queue->tail == NULL) {
        queue->head = newNode;
        queue->tail = newNode;
    } else {
        queue->tail->next = newNode;
        queue->tail = newNode;
    }
}

int dequeue(struct Queue* queue) {
    if (queue->head == NULL) {
        printf("Queue is empty\n");
        return -1; // Return a sentinel value for an empty queue
    }

    struct Node* temp = queue->head;
    int data = temp->data;

    queue->head = temp->next;

    if (queue->head == NULL) {
        // Queue is now empty, update the tail
        queue->tail = NULL;
    }

    free(temp);
    return data;
}

void printQueue(struct Queue* queue) {
    struct Node* ptr = queue->head;

    printf("\nCurrent items in queue:\n");
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    struct Queue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    printQueue(queue);

    int dequeued = dequeue(queue);
    if (dequeued != -1) {
        printf("Dequeued item: %d\n", dequeued);
    }

    printQueue(queue);

    // Dequeue the remaining items
    while (queue->head != NULL) {
        dequeued = dequeue(queue);
        if (dequeued != -1) {
            printf("Dequeued item: %d\n", dequeued);
        }
    }

    // Free allocated memory
    free(queue);

    return 0;
}

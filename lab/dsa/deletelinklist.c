#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* middle(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr = head;

    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } 
    else {
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    return head;
}

void print(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

struct Node* startdel(struct Node* head){
  struct Node* ptr=head;
  head=head->next;
  free(ptr);
  return head;
}

struct Node* delend(struct Node* head){
  struct Node* ptr=head;
  struct Node* extra=head->next;
  while(extra->next!=NULL){
    ptr=ptr->next;
    extra=extra->next;

  }
  ptr->next=NULL;
  free(extra);

  return head;
}


struct Node* delmid(struct Node* head,int index){
  struct Node* ptr=head;
  struct Node* extra=head->next;
  int i=0;
  while(i!=index-1){
    ptr=ptr->next;
    extra=extra->next;
    i++;
  }
     ptr->next=extra->next;
      free(extra);
  return head;
}

int main() {
    struct Node* head = NULL;
    head = middle(head, 1);
    head = middle(head, 2);
    head = middle(head, 3);
    head = middle(head, 4);
    head = middle(head, 5);
    head = middle(head, 6); 
  printf("creation of list\n");
    print(head);
    
  printf("After deletion of first node\n");
    head=startdel(head);
    print(head);
  
  printf("AfterDeletion of last node\n");  
    delend(head);
    print(head);

  printf("Deletion of some middle node\n");
    delmid(head,2);
    print(head);


    return 0;
}

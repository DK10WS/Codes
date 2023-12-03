#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

Node* middle( Node* head, int data) {
     Node* newNode = ( Node*)malloc(sizeof( Node));
     Node* ptr = head;

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

void print( Node* head) {
     Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

 Node* startdel( Node* head){
   Node* ptr=head;
  head=head->next;
  free(ptr);
  return head;
}

 Node* delend( Node* head){
   Node* ptr=head;
   Node* extra=head->next;
  while(extra->next!=NULL){
    ptr=ptr->next;
    extra=extra->next;

  }
  ptr->next=NULL;
  free(extra);

  return head;
}


 Node* delmid( Node* head,int index){
   Node* ptr=head;
   Node* extra=head->next;
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
     Node* head = NULL;
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

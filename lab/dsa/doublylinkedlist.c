#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
  struct Node* prev;

};

struct Node* End(struct Node* head,int data){
    struct Node* newNode= (struct Node* )malloc(sizeof(struct Node));
    struct Node* ptr=head;

  newNode->data=data;
  newNode->next=NULL;
  
  while(ptr->next!=NULL){
    ptr=ptr->next;
  }
  newNode->prev=ptr;
  ptr->next=newNode;

  return head;
}
void display(struct Node* head){
  struct Node* ptr=head;
  while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
  }
}

  int main(){
  struct Node* head=(struct Node* )malloc(sizeof(struct Node));
  head->prev=NULL;
  head->next=NULL;
  head->data=10;

  End(head,20);
  display(head);
}

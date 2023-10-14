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

struct Node* start(struct Node* head,int data){
  struct Node* newNode=(struct Node* )malloc(sizeof(struct Node));
  
  newNode->data=data;
  newNode->next=head;
  newNode->prev=NULL;
  head->prev=newNode;
  head=newNode;

  return head;

}
void reversePrint(struct Node* head){
  struct Node* ptr=head;

  while(ptr->next!=NULL)
    ptr=ptr->next;
  
  while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->prev;
  }
}

struct Node* middle(struct Node* head,int data,int loc){
  struct Node* newNode=(struct Node* )malloc(sizeof(struct Node*));
  struct Node* ptr=head;
  
  newNode->data=data;

  for(int i=1;i<loc-1;i++){
    ptr=ptr->next;
  }
  newNode->next=ptr->next;
  newNode->prev=ptr;

  ptr->next=newNode;
  
  return head;

}

  int main(){
  struct Node* head=(struct Node* )malloc(sizeof(struct Node));
  head->prev=NULL;
  head->next=NULL;
  head->data=10;

  head=End(head,20);
  head=End(head,30);
  head=End(head,40);
  display(head);

    printf("After inserting from begining\n");
  
    head=start(head,5);
    head=start(head,0);
    display(head);

printf("reversed linked list:\n");
reversePrint(head);

  printf("After insertion in middle\n");
   middle(head,2,2);
    middle(head,7,4);
    display(head);
      




}

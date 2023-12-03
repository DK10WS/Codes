#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
}Node;

Node* add(Node* head, int data){
  Node* ptr=head;
  Node* newNode=(Node*)malloc(sizeof(Node));
  newNode->data=data;


  if(head==NULL){
    head=newNode;
    head->next=head;
  }
  else{
    while(ptr->next!=head)
      ptr=ptr->next;
  ptr->next=newNode;
  newNode->next=head;
  }
  return head;
}

void print(Node* head){
  Node* ptr=head;

  printf("%d\n",head->data);
    ptr=ptr->next;
    while(ptr!=head){
    printf("%d\n",ptr->data);
    ptr=ptr->next;

  }
    
}


int main(){
  Node* head=NULL;
  head=add(head,1);
  head=add(head,2);
  head=add(head,3);
  head=add(head,4);

  printf("After insertion: \n");
  print(head);
}

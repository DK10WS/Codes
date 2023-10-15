#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

struct Node* add(struct Node* head, int data){
  struct Node* ptr=head;
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
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

void print(struct Node* head){
  struct Node* ptr=head;

  printf("%d\n",head->data);
    ptr=ptr->next;
    while(ptr!=head){
    printf("%d\n",ptr->data);
    ptr=ptr->next;

  }
    
}


int main(){
  struct Node* head=NULL;
  head=add(head,1);
  head=add(head,2);
  head=add(head,3);
  head=add(head,4);

  printf("After insertion: \n");
  print(head);
}

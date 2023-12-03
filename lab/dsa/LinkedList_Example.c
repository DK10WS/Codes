#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node* next;
  
}Node;

Node* END(Node* head,int data){
  Node* newNode=
(Node* )malloc(sizeof(Node));

  Node* ptr=head;

  newNode->data=data;
  newNode->next=NULL;

  while(ptr->next!=NULL){
  ptr=ptr->next;
}
ptr->next=newNode;
return head;
}

void print(Node* head){
  Node* ptr=head;

  while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
  }
}

Node* Start(Node* head,int data){
  Node* newNode=(Node* )malloc(sizeof(Node));
  Node* ptr=head;

  newNode->data=data;
  newNode->next=head;

  head=newNode;
  return head;

}


Node* middle(Node* head,int data,int loc){
  Node* newNode=(Node*)malloc(sizeof(Node));
  Node* ptr=head;
  Node* temp=head;
  temp=temp->next;

  newNode->data=data;

  for(int i=1;i<loc-1;i++){
    ptr=ptr->next;
    temp=temp->next;
  }
  ptr->next=newNode;
  newNode->next=temp;
     return head;
}




int main(){
  Node* head=(Node* )malloc(sizeof(Node));
 head->next=NULL;
  head->data=10;
    END(head,20);
    END(head,30);
    END(head,40);
    END(head,50);
    END(head,60);  
    END(head,70);
  print(head);

  printf("\nAfter adding at start location\n");
  head=Start(head,5);
  print(head);

  printf("after adding in middle\n");
  middle(head,40,2);
  print(head);

}
 
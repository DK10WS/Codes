#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
  
};

struct Node* END(struct Node* head,int data){
  struct Node* newNode=
(struct Node* )malloc(sizeof(struct Node));

  struct Node* ptr=head;

  newNode->data=data;
  newNode->next=NULL;

  while(ptr->next!=NULL){
  ptr=ptr->next;
}
ptr->next=newNode;
return head;
}

void print(struct Node* head){
  struct Node* ptr=head;

  while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
  }
}

struct Node* Start(struct Node* head,int data){
  struct Node* newNode=(struct Node* )malloc(sizeof(struct Node));
  struct Node* ptr=head;

  newNode->data=data;
  newNode->next=head;

  head=newNode;
  return head;

}


struct Node* middle(struct Node* head,int data,int loc){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  struct Node* ptr=head;
  struct Node* temp=head;
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
  struct Node* head=(struct Node* )malloc(sizeof(struct Node));
 head->next=NULL;
  head->data=10;
    
  END(head,20);  
  END(head,30);
  print(head);

  printf("\nAfter adding at start location\n");
  head=Start(head,5);
  print(head);

  printf("after adding in middle\n");
  middle(head,40,2);
  print(head);

}
 



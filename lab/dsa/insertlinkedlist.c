#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node* next;
}Node;


Node* End(Node* head,int data ){
  Node* newNode=(Node* )malloc(sizeof(Node));
  Node *ptr=head;
  
  
  newNode->data=data;
  newNode->next=NULL;

  while(ptr->next!=NULL){
    ptr=ptr->next;
  }
  ptr->next=newNode;
  return head;

}


Node* middle(Node* head,int data,int index){
  Node* newNode=(Node* )malloc(sizeof(Node));
  Node* ptr=head;
  newNode->data=data;

int i=0;
  while(i!=index-1){
    ptr=ptr->next;
    i++;
  }

  newNode->next=ptr->next;
  ptr->next=newNode;
    
  return head;
}



Node* start(int data,Node* head){
  Node* newNode=(Node* )malloc(sizeof(Node));

  newNode->data=data;
  newNode->next=head;
  
  return newNode;
} 
void print(Node* head){
  while (head!=NULL){
  printf("\n%d\n",head->data);
  head=head->next;
  }


}

 int main(){
  Node* head= (Node*)malloc(sizeof(Node));

  Node* Second= (Node*)malloc(sizeof(Node));
  Node* third= (Node*)malloc(sizeof(Node));
  Node* fourth= (Node*)malloc(sizeof(Node));
  Node* fifth= (Node*)malloc(sizeof(Node));
  
  head->data=0;
  head->next=Second;

  Second->data=1;
  Second->next=third;
  
  third->data=2;
  third->next=fourth;
  
  fourth->data=3;
  fourth->next=fifth;
  
  fifth->data=4;
  fifth->next=NULL;
  
  head=start(10,head);
 
  middle(head,69,3);

  End(head,99);

  print(head);
  


}




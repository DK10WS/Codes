#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node* next;
}Node;
Node* front=NULL;
Node* rear=NULL;

void Enque(int data){
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;

  if(front==NULL && rear==NULL){
  front=rear=newNode;
  }
  rear->next=newNode;
    rear=newNode;
}


void deque(){
  Node* temp=front;

  front=front->next;
  free(temp);
}

void print(){
  Node* ptr=front;

  while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
      
  }
}


int main(){
  Enque(10);
  Enque(20);
  Enque(30);
  Enque(40);
  print();
  printf("After dequing:\n");
  deque();
  deque();
  
  print();

}



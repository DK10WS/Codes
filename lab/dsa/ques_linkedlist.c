#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
};
struct Node* front=NULL;
struct Node* rear=NULL;

void Enque(int data){
   struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;

  if(front==NULL && rear==NULL){
  front=rear=newNode;
  }
  rear->next=newNode;
    rear=newNode;
}


void deque(){
  struct Node* temp=front;

  front=front->next;
  free(temp);
}

void print(){
  struct Node* ptr=front;

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



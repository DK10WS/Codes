#include <stdio.h>
#include <stdlib.h>

int arr[4];
int rear=-1;
int front=-1;
int len=5;

void Enque(int data){
  if(rear==-1 && front==-1){
    rear++;
    front++;
    arr[rear]=data;
  }
  else{
    rear++;
    rear=rear % len;
    arr[rear]=data;
  }
}

void Deque(){

  front++;
}

void print(){
  for(int i=front;i<=rear;i++){
    printf("%d\n",arr[i]);
  }
}

int main(){
  Enque(10);
  Enque(20);
  Enque(30);
  Enque(40);
  Enque(50);
  print();
  
  printf("\nAfter deque\n");
  Deque();
  print();
  
  printf("\nAfter Enque again:\n");
  Enque(60);
  print();
  
}

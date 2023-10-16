#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int arr[10];
int rear=-1;
int front=-1;

void Enque(int data){
  if(rear==-1 && front==-1 ){
  rear++;
  front++;
  arr[rear]=data;
  }
  else{
    rear++;
    arr[rear]=data;
  }
}

void print(){
  for(int i=front;i<=rear;i++){
    
    printf("%d\n",arr[i]);
  }
}
void deque(){
  if(front==-1 && rear==-1){
  printf("YOU DUMBASS");
  }
  else{
    front++;
  }
}

int main(){
  Enque(10);
  Enque(20);
  Enque(30);
  Enque(40);
  print();

  printf("After deque:\n ");

  deque();
  deque();
  deque();
  print();

}

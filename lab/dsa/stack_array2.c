#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int A[MAX];
int top=-1;

void push(int data){
  if (top==MAX){
    printf("Cannot push \n");
  }
  top++;
  A[top]=data;
}

void pop(){
  if (top==-1){
    printf("Stack is empty\n");
  }
  top--;
}

void print(){
  for(int i=0;i<=top;i++)
  printf("%d\n",A[i]);
}

int main(){
  push(10);
  push(20);
  push(30);
  print();
  printf("\nAfter poping:\n");
  pop();
  pop();
  print();
}

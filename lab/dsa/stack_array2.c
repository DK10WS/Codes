#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int A[MAX];
int top=-1;

void push(int data){
  top++;
  A[top]=data;
  
}

void pop(){
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
  print();
}

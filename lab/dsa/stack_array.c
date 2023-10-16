#include <stdio.h>
#include<stdlib.h>

struct stack{
  int size;
  int top;
  int * array;

};
void isFull(struct stack * s){
  if(s->top==s->size-1){
    printf("it is isFull");
  }
}
void isEmpty(struct stack* s){
  if(s->top==-1){
    printf("stack is empty");
  }
}

int push(struct stack* s,int data){
  
  s->top++;
  s->array[s->top]=data;
  return s->top;



}
void print(struct stack* s){
  for (int i=0;i<=s->top;i++)
    printf("\n%d\n",s->array[i]);
}

int pop(struct stack* s ){
  int data=s->array[s->top];
  s->top--;
  return data;

}

int main(){
  struct stack* s =(struct stack*)malloc(sizeof(struct stack));
  s->size=10;
  s->top=-1;
  
  s->array=(int *)malloc(s->size * sizeof(struct stack));
  
  push(s,1);
  push(s,2);
  push(s,3);
  push(s,4);
  push(s,5);
  push(s,6);
  
  pop(s);

  print(s);



}

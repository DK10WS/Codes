#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node* next;
  
}Node;


Node* push(Node* top,int data){
  Node* temp=(Node* )malloc(sizeof(Node));
  temp->data=data;
  temp->next=top;
  top=temp;
  return top;

}

void print(Node* top){
  while(top!=NULL){
    printf("%d\n",top->data);
    top=top->next;
  }

}

Node* pop(Node* top){
  if(top==NULL){
    printf("YOU BUMBLING BAFOON THERE IS NO ELEMENT MAYBE IF YOU WERE HALF SMART YOU WOULD HAVE GUESSED THAT RIGHT");
    return top;
  }else{
      Node* temp=top;

      top=top->next;
      free(temp);
      return top;
      }


  }


int main(){
  Node* top=NULL;

  top=push(top,10);
  top=push(top,20);
  top=push(top,30);
  top=push(top,40);
  top=push(top,50);
  
  print(top);

  printf("After poping\n");
  top=pop(top);
  top=pop(top);

  print(top);

}

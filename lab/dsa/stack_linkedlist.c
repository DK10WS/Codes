#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
  
};


struct Node* push(struct Node* top,int data){
  struct Node* temp=(struct Node* )malloc(sizeof(struct Node));
  temp->data=data;
  temp->next=top;
  top=temp;
  return top;

}

void print(struct Node* top){
  while(top!=NULL){
    printf("%d\n",top->data);
    top=top->next;
  }

}

struct Node* pop(struct Node* top){
  if(top==NULL){
    printf("YOU BUMBLING BAFOON THERE IS NO ELEMENT MAYBE IF YOU WERE HALF SMART YOU WOULD HAVE GUESSED THAT RIGHT");
    return top;
  }else{
      struct Node* temp=top;

      top=top->next;
      free(temp);
      return top;
      }


  }


int main(){
  struct Node* top=NULL;

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

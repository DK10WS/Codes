#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
};


struct Node* End(struct Node* head,int data ){
  struct Node* newNode=(struct Node* )malloc(sizeof(struct Node));
  struct Node *ptr=head;
  
  
  newNode->data=data;
  newNode->next=NULL;

  while(ptr->next!=NULL){
    ptr=ptr->next;
  }
  ptr->next=newNode;
  return head;

}


struct Node* middle(struct Node* head,int data,int index){
  struct Node* newNode=(struct Node* )malloc(sizeof(struct Node));
  struct Node* ptr=head;
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



struct Node* start(int data,struct Node* head){
  struct Node* newNode=(struct Node* )malloc(sizeof(struct Node));

  newNode->data=data;
  newNode->next=head;
  
  return newNode;
} 
void print(struct Node* head){
  while (head!=NULL){
  printf("\n%d\n",head->data);
  head=head->next;
  }


}

 int main(){
  struct Node* head= (struct Node*)malloc(sizeof(struct Node));

  struct Node* Second= (struct Node*)malloc(sizeof(struct Node));
  struct Node* third= (struct Node*)malloc(sizeof(struct Node));
  struct Node* fourth= (struct Node*)malloc(sizeof(struct Node));
  struct Node* fifth= (struct Node*)malloc(sizeof(struct Node));
  
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




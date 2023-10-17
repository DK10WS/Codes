#include <stdio.h>

void Henoi(int size,char from,char aux,char to){

  if (size==1){
  printf("moved rod from %c to %c\n",from,to);
  return;
  }
  Henoi(size-1,from,to,aux);{
    printf("moved from %c to %c\n",from,to );
  }
  Henoi(size-1,aux,from,to);

}

int main(){
  int size=4;
  Henoi(size,'a','c','b');
}

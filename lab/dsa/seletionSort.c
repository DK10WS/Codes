#include<stdio.h>
#include <stdlib.h>

int main(){
  
  int arr[7]={1,2,5,6,4,7,8};
  
    for(int i=0;i<7;i++){
      int min=i;
          
      for(int j=i+1;j<7;j++){
        if(arr[j]<arr[min]){
          min=j;
        }
      }
    int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;  
    }

    printf("Sorted array: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

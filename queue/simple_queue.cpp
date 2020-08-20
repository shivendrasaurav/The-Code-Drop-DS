#include <stdio.h>
#define size 5

int q[size], pos=0;

void enqeue(int elem){
  if(pos>size-1){
    printf("\nQueue is Full Element %d Couldn't be inserted\n", elem);
  }
  else{
    q[pos]=elem;
    printf("\nElement %d is inserted at position : %d\n", elem, pos);
    pos++;
  }

  return;
}

void deqeue(){
  if(pos<=0){
    printf("\nQueue is Empty Nothing to be removed\n");
  }
  else{
    int i;
    for(i=0; i<size-1; i++){
      q[i]=q[i+1];
    }
    q[size-1]=0;
    pos--;
  }
  return;
}

int main(void) {
  int i, n;
  for(i=0; i<size; i++){
    scanf("%d", &n);
    enqeue(n);
  }
  printf("\n\nOriginal Input Array : ");
  for(i=0; i<size; i++){
      printf("%d, ", q[i]);
    }
  enqeue(10);
  printf("\n\nSince queue is full, queue remains same : ");
  for(i=0; i<size; i++){
      printf("%d, ", q[i]);
    }
  deqeue();
  printf("\n\nWhen we deqeue first element gets removed and every other element gains one index so the new queue becomes: ");
  for(i=0; i<size; i++){
      printf("%d, ", q[i]);
    }
  enqeue(5);
  printf("\n\nThis time the queue is not full, so enqeued element will be stored in last available index : ");
  for(i=0; i<size; i++){
      printf("%d, ", q[i]);
  }
}

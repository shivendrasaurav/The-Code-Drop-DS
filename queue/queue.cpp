#include<stdio.h>
#include<stdlib.h>
#define size 5

int Q[size], pos=0;

void enqueue(int a){
	if(pos>size-1){
		printf("\nQueue is Full, Couldn't insert element");
	}
	else{
		Q[pos]=a;
		printf("\nElement %d was inserted at position: %d", a, pos);
		pos++;
	}
}

void deque(){
	if(pos<=0){
		printf("\nQueue is empty, nothing to be removed");
	}
	else{
		int i;
		for(i=0; i<size-1; i++){
			Q[i]=Q[i+1];
		}
		Q[pos]=0;
		pos--;
	}
}

void print_Q(){
	int i;
	printf("\n\n");
	for(i=0; i<size; i++)
		printf("%d, ", Q[i]);
	printf("\n\n");
}

int main(){
	int n, ch;
	while(1){
		printf("\n\nEnter your choice: \n1. Insertion \n2. Deletion \n3. Status \n4. Exit\n");
		scanf("%d", &ch);
		if(ch==1){
			printf("\n\nEnter number to be inserted : ");
			scanf("%d", &n);
			enqueue(n);
			printf("\n\n");
		}
		else if(ch==2){
			printf("\n\nElement at last position has been dequeued\n\n");
			deque();
		}
		else if(ch==3){
			printf("\n\nCurrent Queue Status : ");
			print_Q();
		}
		else if(ch==4){
			printf("\n\nExiting Program...");
			exit(0);
		}
		else{
			printf("\n\nInvalid Choice, Retry\n\n");
		}
	}
}

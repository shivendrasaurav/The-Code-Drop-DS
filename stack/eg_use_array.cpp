#include<stdio.h>

int SIZE = 5;
int stack[5];
int top = -1;

int peek(){
	return stack[top];
}

int pop(){
	if(top == -1){
		printf("\nStack is empty, No elements removed");
	}
	else{
		int data;
		stack[top]=data;
		top = top - 1;
		printf("\nElement at top was removed");
	}
}

int push(int elem){
	if(top == SIZE){
		printf("\nStack is Full, the element could not be inserted");
	}
	else{
		top = top + 1;
		stack[top] = elem;
		printf("\n%d was added to the stack", elem);
	}
}

int main(){
	while(1){
		int choice;
		printf("\n What do you want to do: 1. Push\n2. Pop\n3. Peek\n4. Exit");
		scanf("%d", &choice);
		if(choice==1){
			int val;
			printf("\nEnter the element to be inserted in the stack: ");
			scanf("%d", &val);
			push(val);
		}
		else if(choice==2){
			pop();
		}
		else if(choice==3){
			printf("\n%d is on top of the Stack", peek());	
		}
		else if(choice==4){
			exit(0);
		}
	}
	return 0;
}

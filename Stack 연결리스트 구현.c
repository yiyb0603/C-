#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	int data;
	struct Node* link;
}Node;

Node* top = NULL;

int push(int input)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = input;
	newNode->link = NULL;

	if (top == NULL)
		top = newNode;
	else
	{
		newNode->link = top;
		top = newNode;
	}
}

int pop(void)
{
	Node* temp = top;
	
	if (top == NULL)
	{
		top = NULL;
		printf("Stack is Underflow!");
	}

	else
	{
		top = top->link;
		free(temp);
	}
}

int main(void)
{
	push(1);
	push(2);
	push(3);
	pop();
	pop();
	push(4);
	return 0;
}
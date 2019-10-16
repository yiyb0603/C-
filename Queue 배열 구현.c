#include <stdio.h> 
#define MAX 5

int queue[MAX];
int front = 0, rear = 0;

int enqueue(int input)
{
	if ((rear + 1) % 5 == front)
	{
		printf("Queue overflow\n");
		return;
	}

	rear = ++rear % MAX;
	queue[rear] = input;
}

int dequeue(void)
{
	if (front == rear)
	{
		printf("Queue unerflow\n");
		return -1;
	}
	front = ++front % MAX;
	return queue[front];
}

int print_queue(void)
{
	int i;
	for (i = front; i != rear; i = (++i) % MAX) {
		printf("%d ", queue[i + 1] % MAX);
	}
}

/* int main(void)
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);

	printf("dequeue : %d\n", dequeue());
	printf("dequeue : %d\n", dequeue());
	printf("dequeue : %d\n", dequeue());

	print_queue();
	return 0;
} */

int main(void)
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);

	printf("dequeue : %d\n", dequeue());
	printf("dequeue : %d\n", dequeue());

	enqueue(6);

	print_queue();
	return 0;
} 

/* int main(void)
{
	enqueue(1);
	enqueue(2);

	printf("dequeue: %d\n", dequeue());
	printf("dequeue: %d\n", dequeue());
	printf("dequeue: %d\n", dequeue());

	print_queue();
	return 0;
} */
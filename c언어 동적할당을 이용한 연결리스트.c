#include <stdio.h>
#include <stdlib.h>
/* 숙제 : 뒤에서 부터 삽입하는 insert2 함수와 뒤에서 부터 삭제하는 delete2 함수 작성해서 일요일 밤 11시까지 제출 */

typedef struct Node
{
	int data;
	struct Node * next;
}Node;

/* int insert1(Node ** head, int input) // 앞에서 삽입하는 함수
{
	Node * newNode;
	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = input;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		Node * tail = *head;
		newNode->next = tail;
		*head = newNode;
	}
} */

int insert2(Node **head, Node **tail, int input) // 뒤에서 삽입하는 함수
{
	Node *newNode;
	newNode = (Node*)malloc(sizeof(Node)); // newNode의 네모 생성
	newNode->data = input; // newNode에다가 데이터를 input값으로 설정
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		*tail = newNode;
	}
	else
	{
		(*tail)->next = newNode;
		*tail = newNode;
	}
}

//int delete1(Node * *head) // 앞에서 삭제하는 함수
//{
//	Node *delNode, *delNextNode;
//	delNode = NULL, delNextNode = NULL;
//	if (*head)
//	{
//		delNode = *head;
//		delNextNode = delNode->next;
//		*head = delNextNode;
//		free(delNode);
//	}
//		while (delNextNode != NULL) 
//		{
//			delNode = delNextNode;
//			delNextNode = delNode->next;
//			*head = delNextNode;
//
//			printf("%d (을)를 삭제합니다. \n", delNode->data);
//			free(delNode);
//		}
//} 

int delete2(Node**head, Node**tail) // 뒤에서 삭제하는 함수
{
	Node *delNode = *head;
	Node *beforeNode = NULL;
	while (delNode ->next != NULL)
	{
		beforeNode = delNode;
		delNode = delNode->next;
	}
	*tail = beforeNode;
	if (beforeNode != NULL)
		beforeNode->next = NULL;
	printf("삭제합니다.");
	free(delNode);
} 

int main(void)
{
	Node * head = NULL;
	Node * tail = NULL;
	int input = 1;
	printf("데이터 입력 : ");
	while (1)
	{
		scanf("%d", &input);
		insert2(&head, &tail, input);
		if (input == 0)
			break;
	}
	 delete2(&head, &tail);
	 if (tail == NULL)
		 head = NULL;
	return 0;
}
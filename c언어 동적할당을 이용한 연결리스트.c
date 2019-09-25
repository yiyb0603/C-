#include <stdio.h>
#include <stdlib.h>
/* ���� : �ڿ��� ���� �����ϴ� insert2 �Լ��� �ڿ��� ���� �����ϴ� delete2 �Լ� �ۼ��ؼ� �Ͽ��� �� 11�ñ��� ���� */

typedef struct Node
{
	int data;
	struct Node * next;
}Node;

/* int insert1(Node ** head, int input) // �տ��� �����ϴ� �Լ�
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

int insert2(Node **head, Node **tail, int input) // �ڿ��� �����ϴ� �Լ�
{
	Node *newNode;
	newNode = (Node*)malloc(sizeof(Node)); // newNode�� �׸� ����
	newNode->data = input; // newNode���ٰ� �����͸� input������ ����
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

//int delete1(Node * *head) // �տ��� �����ϴ� �Լ�
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
//			printf("%d (��)�� �����մϴ�. \n", delNode->data);
//			free(delNode);
//		}
//} 

int delete2(Node**head, Node**tail) // �ڿ��� �����ϴ� �Լ�
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
	printf("�����մϴ�.");
	free(delNode);
} 

int main(void)
{
	Node * head = NULL;
	Node * tail = NULL;
	int input = 1;
	printf("������ �Է� : ");
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
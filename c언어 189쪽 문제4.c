#include <stdio.h>
int main(void)
{
	int num1, num2;
	int result;

	printf("���� �ΰ��� �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2); // ���� �ΰ� �Է�

	result = (num1 < num2) ? num2 - num1 : num1 - num2; 
	/*���� result�� �ؼ� : num2�� num1���� ũ�� �տ��ִ� num2 - num1�� ��� , 
	num2�� num1���� ū�� �ƴҽÿ� ���� �ڿ��ִ� num1-num2�� ����Ѵ� . */
	printf("���� ��� : %d \n", result); // ������� ���� result�� ���
	return 0;
}
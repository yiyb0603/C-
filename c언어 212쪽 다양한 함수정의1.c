#include <stdio.h>

int Add(int num1, int num2)  // Add�� int�� ���� 2���� ��´�.
{
	return num1 + num2; // num1+num2�ǰ��� result�� ��ȯ���ش�.
}
int main(void)
{
	int result;
	result = Add(3, 4); // Add�� ���� 3�� 4�� �ְ� ����Ѵ�
	printf("�������1 : %d \n", result); // return 3 + 4�� ���� ����Ѵ�.
	result = Add(5, 8); // 5�� 8�� �������ν� 3�� 4�� ���󰣴�.
	printf("�������2 : %d \n", result); // return 5 + 8�� ���� ����Ѵ�.
	return 0;
}
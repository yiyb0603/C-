#include <stdio.h>
int NumberCompare(int num1, int num2); // ���ں񱳰� int num1�� int num2

int main(void)
{
	printf("3�� 4�߿��� ū ���� %d �̴� . \n", NumberCompare(3, 4)); // int num1�� num2�� ���� 3�� 4�� �ִ´�.
	printf("7�� 2�߿��� ū ���� %d �̴� . \n", NumberCompare(7, 2)); // int num1�� num2�� ���� 7�� 2�� �ִ´�.
	return 0;
}
int NumberCompare(int num1, int num2) // ���� �ּ������� ���� ����
{
	if (num1 > num2)
		return num1; // num1�� Ŭ�� num1���
	else
		return num2; // �ƴҽ� num2���
}
#include <stdio.h>
int main(void)
{
	int num1 = 10; 
	int num2 = 12; // num1�� 10 , num2�� 12�� ����
	int result1, result2, result3; // result1 , result2 , result3 ���� ����

	result1 = (num1 == num2); // num1�� num2�� ������?
	result2 = (num1 <= num2); // num2�� num1���� ũ�ų� ������?
	result3 = (num1 > num2); // num1�� num2���� ū��?

	printf("%d \n", result1); // result1�� �� �Ǵ� ���� ���
	printf("%d \n", result2); // result2�� �� �Ǵ� ���� ���
	printf("%d \n", result3); // result3�� �� �Ǵ� ���� ���
	return 0;
}
#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 12; // num1�� 10 , num2�� 12�� ����.
	int result1, result2, result3; // result���� ����

	result1 = (num1 == 10 && num2 == 12); // num1�� 10�̰� num2�� 12�ΰ��� ���� ���� ����
	result2 = (num1 < 12 || num2>12); // num1�� 12���� �۴� || num2�� 12���� ũ�� -- �ΰ��� �ϳ��� �¾Ƶ� ��
	result3 = (!num1); // num1�� ���̸� ����, �����̸� �� ���.

	printf("result1 : %d \n", result1); // result1�� ���
	printf("result2 : %d \n", result2); //result2�� ���
	printf("result3 : %d \n", result3); // result3�� ���
	return 0;
}
#include <stdio.h>
int main(void)
{
	int opt;
	double num1, num2;
	double result; // �Ǽ��� �Է��ؾ��ϱ� ������ double�� ����

	printf("1. ���� 2. ���� 3.���� 4.������ \n");
	printf("���� ? \n"); // 4���� ����
	scanf("%d", &opt); // ��ȣ �Է�
	printf("�� ���� �Ǽ� �Է� : ");
	scanf("%lf %lf", &num1, &num2); // �Ǽ� 2�� �Է�

	if (opt == 1)
		result = num1 + num2; // 1���� �Է������� �ش��� result�� ���
	if (opt == 2)
		result = num1 - num2; // 2���� �Է������� �ش��� result�� ���
	if (opt == 3)
		result = num1 * num2; // 3���� �Է������� �ش��� result�� ���
	if (opt == 4)
		result = num1 / num2; // 4���� �Է������� �ش��� result�� ���

	printf("��� : %f \n", result); // result�� ���
	return 0;
}
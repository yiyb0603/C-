#include <stdio.h>
int main(void)
{
	int a, b;

	printf("�ΰ��� ������ �Է��ϼ��� : ");
	scanf("%d %d", &a, &b); // �ΰ� ���� �Է�( ������� 10�� 3 �Է�)

	printf("%d + %d = %d \n", a, b, a + b); // 10 + 3
	printf("%d - %d = %d \n", a, b, a - b); // 10 - 3
	printf("%d X %d = %d \n", a, b, a*b); // 10 X 3
	printf("%d / %d = %d \n", a, b, a / b); // 10 ������ 3
	printf("%d ������ %d = %d \n", a, b, a%b); // 10 ������ 3�� ���������
	return 0;
}
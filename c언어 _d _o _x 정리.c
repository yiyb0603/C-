#include <stdio.h>
int main(void)
{
	int num1, num2, num3;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %o %x", &num1, &num2, &num3); // ������ ���� �ٸ� ����� ���� �Է�
	// %d = 10���� ,  %o = 8���� , %x = 16����
	printf("�Էµ� ���� 10���� ��� : ");
	printf("%d %d %d \n", num1, num2, num3); // ���� �ٸ������ ������ 10������ ��ȯ.

	return 0;
}
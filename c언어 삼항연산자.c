#include <stdio.h>
int main(void)
{
	int num, abs;
	printf("���� �Է� : ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1); // num���� 0���� ũ�� num�� �״�� ��� , num���� 0���� ������ num *(-1)�� ���
	printf("���� : %d \n", abs);
	return 0;
}
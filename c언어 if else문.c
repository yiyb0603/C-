#include <stdio.h>
int main(void)
{
	int num;
	
	printf("���� �Է� : ");
	scanf("%d", &num); // ���� �Է�

	if (num < 0)
		printf("�Է� ���� 0���� �۴�. \n"); // ���� 0���� �������� �Է��ҽ� ������ ���.

	else
		printf("�Է� ���� 0���� ���� �ʴ�. \n"); // 0�̳� 0���� ū���� ġ�� ������ ���.
	return 0;
}
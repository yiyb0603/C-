#include <stdio.h>
int main(void)
{
	int num, i = 0;

	printf("���� �ϳ� �Է� : ");
	scanf("%d", &num); // ��� �Է¹����� �Է� (������� 6�Է�)

	while (i < 6) // i�� 0 ����, i�� 6�̵Ǹ� ���� , 0 1 2 3 4 5 �̷��ԵǾ 6�� ���.
	{
		printf("Hello World \n");
		i++; // �ѹ� �ݺ��Ҷ����� i�� 1�� ����.
	}
	return 0;
}
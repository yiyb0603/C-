#include <stdio.h>
int main(void)
{
	int a, b;
	int result1, result2;

	printf("�ΰ��� ������ �Է��ϼ��� : ");
	scanf("%d %d", &a, &b); // �ΰ��� ���� �Է� ( ������� 4�� 16�Է�)

	result1 = (a - b); // result1�� 4���� 16�� ����
	result2 = (b - a); // result2�� 16���� 4�� ����
	
	if (a < b) // ���� b�� a���� ū���
		printf("%d", result2); // result2���� 16���� 4�� ������ �Ѵ�.
	else // �׷��� �ƴҽÿ���
		printf("%d", result1); //result1���� 4���� 16������. (�̰� 4�� 16�� �Է����� ���ø� �߱⶧���� 16 4�� �Է��ϸ� result1���� ��µȴ�.
		
	return 0;
}
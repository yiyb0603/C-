#include <stdio.h>
int main(void)
{
	int start, end, result;

	printf("�ΰ��� ������ �Է��ϼ��� ");
	scanf("%d %d", &start, &end); // ���� �Է� . (���� 3�� 5�� �Է�������)

	for (result = 0; start <= end; start++) // ��� = 0 ,   3 <=5 ,  start���� 5�� �ɶ����� ���� , <=�� �ƴ� <�϶��� 3+4�� ���.
		result += start; // result���� start���� ��� ���Ѱ�.
		printf("%d", result); // result�� ���.

	return 0; // for�� ������ ������ ���� return 0.
}
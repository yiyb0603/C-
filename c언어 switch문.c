#include <stdio.h>
int main(void)
{
	int num;
	printf("1�̻� 5������ ���� �Է��ϼ��� : ");
	scanf("%d", &num); // �����Է�

	switch (num) {
	case 1:
		printf("1�� one \n");
		break; // 1���� �Է������� �ش繮�� ���, switch�� ��������
	case 2:
		printf("2�� two \n");
		break;// 2���� �Է������� �ش繮�� ���, switch�� ��������
	case 3:
		printf("3�� three \n");
		break;// 3���� �Է������� �ش繮�� ���, switch�� ��������
	case 4:
		printf("4�� four \n");
		break;// 4���� �Է������� �ش繮�� ���, switch�� ��������
	case 5:
		printf("5�� five \n");
		break;// 5���� �Է������� �ش繮�� ���, switch�� ��������
	default:
		printf("����� �Է��� �ڰ��� ���׿�. �������� \n");// �ٸ������� �Է������� �ش繮�� ���
	}
    return 0;
}
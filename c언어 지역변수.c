/*���������� �߰�ȣ�ȿ����� ��������. ��)for���ȿ� int num*/
#include <stdio.h>
int main(void)
{
	int cnt; // main�Լ� cnt����
	for (cnt = 0; cnt < 3; cnt++) // 0�� cnt�� 3���� ���������� �ݺ�
	{
		int num = 0; // �������� num�� 0���� ����
		num++; // num�� ����
		printf("%d��° �ݺ�, �������� num�� %d. \n", cnt + 1, num); // cnt+1�� 0+1�̹Ƿ� 1��°�ݺ��̰� , 0�̿��� num�� 1�����ؼ� �������� num�� 1.
	}
	if (cnt == 3) // cnt�� 3�̵Ǹ� for���� �������´�.
	{                   
		int num = 7; // ���⼭�� ���������� 7�� ����.
		num++; // num������Ű��
		printf("if�� ���� �����ϴ� �������� num�� %d. \n", num); // num���� �������Ѽ� 8.
	}
	return 0;
} 
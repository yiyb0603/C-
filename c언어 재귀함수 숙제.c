#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int num; // ���⼭ int num�� ���������� ���ȴ�. ���� ���� �Լ����� ���� ���� X

int �Է�������Ģ������(int num)
{
	if (num == 0)
		return;
	if (num < 10)  // ���� num���� 10���� ������� 
		printf("%d\n", num);  //�״�� num����� (num���� 1���ڸ��� ������) 
	else
	{
		�Է�������Ģ������(num / 10); // �ƴҽ� <int �Է�������Ģ������> �Լ����� num / 10�Ѱ��� ȣ��
		printf("%d\n", num % 10); // �������� ����Ѵ�. �̶� 0�̵ɽ� �� �Լ��� ����ȴ�.
	}
}
int main(void)
{
	scanf("%d", &num); // num�� �Է��ϱ�
	�Է�������Ģ������(num); // <�Է�������Ģ������> �Լ� ������ ȣ���Ѵ�.
	return 0;
}
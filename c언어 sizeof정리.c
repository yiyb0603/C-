#include <stdio.h>
int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415; //  *sizeof : �ڽ��� ����ϴ� �����Ϸ��� �ڷ��� �� ����Ʈ ũ�⸦ Ȯ���� �� �ִ� ������.*
	printf("���� ch�� ũ�� : %d \n", sizeof(ch)); // ���� ch�� ũ�� ���
	printf("���� inum�� ũ�� : %d \n", sizeof(inum)); // ���� inum�� ũ�� ���
	printf("���� dnum�� ũ�� : %d \n", sizeof(dnum)); // ���� dnum�� ũ�� ���

	printf("char�� ũ�� : %d \n", sizeof(char)); // �ڷ��� char�� ũ�� ���
	printf("int�� ũ�� : %d \n", sizeof(int)); // �ڷ��� int�� ũ�� ���
	printf("long�� ũ�� : %d \n", sizeof(long)); // �ڷ��� long�� ũ�� ���
	printf(" long long�� ũ�� : %d \n", sizeof(long long)); // �ڷ��� long long�� ũ�� ���
	printf("float�� ũ�� : %d \n", sizeof(float)); // �ڷ��� float�� ũ�� ���
	printf("double�� ũ�� : %d \n", sizeof(double)); // �ڷ��� double�� ũ�� ���

	return 0;
}
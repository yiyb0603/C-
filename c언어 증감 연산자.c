#include <stdio.h>
int main(void)
{
	int num1 = 12;
	int num2 = 12; // num1�� num2�� 12�� ����.

	printf("num1 : %d \n", num1); // num1�� ���.
	printf("num1++ : %d \n", num1++); // num1 �ڿ� ++�� �پ����Ƿ� ���߿� 1���� ���� 12.
	printf("num1 : %d \n\n", num1); // ������ ++�� �����ͼ� 1���� ���� 13.

	printf("num2: %d \n", num2); // num2�� ���.
	printf("++num2 : %d \n", ++num2); // num2�տ� ++�� �پ����Ƿ� �ٷ� 1���� ���� 13.
	printf("num2 : %d \n", num2); // ����� num2�� ���.
	return 0;
}
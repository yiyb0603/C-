#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}
int main(void)
{
	int number;
	printf("���� ���丮���� ��� �����Ƿ���? ");
	scanf("%d", &number);
	printf("%d \n", factorial(number));
}
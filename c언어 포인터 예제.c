#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum; 

	pnum = &num1; // ������ pnum�� num1�� ����Ŵ.
	(*pnum) += 30; // num1+=30;�� �����ϴ�.

	pnum = &num2; // ������ pnum�� num2�� ����Ŵ.
	(*pnum) -= 30; // num2-=30;�� �����ϴ�.

	printf("num1 : %d , num2 : %d \n", num1, num2);
	return 0;
}*/
#include <stdio.h>
int main(void)
{
	int temp = 0;
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	(*ptr1) += 10, (*ptr2) -= 10;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	printf("ptr1 : %d \nptr2 : %d", *ptr1, *ptr2);
	return 0;
}
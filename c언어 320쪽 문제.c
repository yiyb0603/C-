#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h> 문제1
int SquareByValue(int num)
{
	return num * num;
}
void SquareByReference(int* ptr)
{
	int num = *ptr;
	*ptr = num * num;
}
int main(void)
{
	int num = 10;
	printf("%d \n",SquareByValue(num));
	SquareByReference(&num);
	printf("%d \n", num);
}*/
/*#include <stdio.h> 문제2
void Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = temp;
}
int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3);
	return 0;
}*/
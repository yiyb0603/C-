#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h> 문제1
int first(int num)
{
	return num;
}
int main(void)
{
	int input;
	scanf("%d", &input);
	input *= 2;
	printf("%d", first(input));
	return 0;
}*/
/*#include <stdio.h> 문제2
void second(int* num1, int* num2)
{
	*num1 *= 2;
	*num2 /= 2;
}
int main(void)
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	second(&num1, &num2);
	printf("%d %d", num1, num2);
	return 0;
}*/
/*#include <stdio.h> 문제3
void third(int* arr)
{
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ",arr[i] *= 2);
	}
}
int main(void)
{
	int arr[5];
	int i;
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	third(arr);
	return 0;
}*/
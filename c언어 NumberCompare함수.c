#include <stdio.h>
int NumberCompare(int num1, int num2); // 숫자비교값 int num1과 int num2

int main(void)
{
	printf("3과 4중에서 큰 수는 %d 이다 . \n", NumberCompare(3, 4)); // int num1과 num2에 각각 3과 4를 넣는다.
	printf("7과 2중에서 큰 수는 %d 이다 . \n", NumberCompare(7, 2)); // int num1과 num2에 각각 7과 2를 넣는다.
	return 0;
}
int NumberCompare(int num1, int num2) // 위의 주석에따라 숫자 투입
{
	if (num1 > num2)
		return num1; // num1이 클시 num1출력
	else
		return num2; // 아닐시 num2출력
}
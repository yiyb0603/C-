#include <stdio.h>

int Add(int num1, int num2)  // Add에 int형 정수 2개를 담는다.
{
	return num1 + num2; // num1+num2의값을 result에 반환해준다.
}
int main(void)
{
	int result;
	result = Add(3, 4); // Add에 각각 3과 4를 넣고 계산한다
	printf("덧셈결과1 : %d \n", result); // return 3 + 4의 값을 출력한다.
	result = Add(5, 8); // 5와 8을 넣음으로써 3과 4는 날라간다.
	printf("덧셈결과2 : %d \n", result); // return 5 + 8의 값을 출력한다.
	return 0;
}
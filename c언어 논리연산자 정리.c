#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 12; // num1은 10 , num2는 12로 선언.
	int result1, result2, result3; // result값들 선언

	result1 = (num1 == 10 && num2 == 12); // num1은 10이고 num2는 12인가에 대한 참과 거짓
	result2 = (num1 < 12 || num2>12); // num1은 12보다 작다 || num2는 12보다 크다 -- 두개중 하나만 맞아도 참
	result3 = (!num1); // num1이 참이면 거짓, 거짓이면 참 출력.

	printf("result1 : %d \n", result1); // result1값 출력
	printf("result2 : %d \n", result2); //result2값 출력
	printf("result3 : %d \n", result3); // result3값 출력
	return 0;
}
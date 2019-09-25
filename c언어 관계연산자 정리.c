#include <stdio.h>
int main(void)
{
	int num1 = 10; 
	int num2 = 12; // num1값 10 , num2값 12로 선언
	int result1, result2, result3; // result1 , result2 , result3 변수 선언

	result1 = (num1 == num2); // num1과 num2가 같은가?
	result2 = (num1 <= num2); // num2가 num1보다 크거나 같은가?
	result3 = (num1 > num2); // num1이 num2보다 큰가?

	printf("%d \n", result1); // result1값 참 또는 거짓 출력
	printf("%d \n", result2); // result2값 참 또는 거짓 출력
	printf("%d \n", result3); // result3값 참 또는 거짓 출력
	return 0;
}
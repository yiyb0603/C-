#include <stdio.h>
int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 입력 : ");
	scanf("%d %o %x", &num1, &num2, &num3); // 세개의 각각 다른 방식의 정수 입력
	// %d = 10진수 ,  %o = 8진수 , %x = 16진수
	printf("입력된 정수 10진수 출력 : ");
	printf("%d %d %d \n", num1, num2, num3); // 각각 다른방식의 정수를 10진수로 변환.

	return 0;
}
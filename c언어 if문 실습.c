#include <stdio.h>
int main(void)
{
	int opt;
	double num1, num2;
	double result; // 실수를 입력해야하기 때문에 double로 선언

	printf("1. 덧셈 2. 뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택 ? \n"); // 4개중 선택
	scanf("%d", &opt); // 번호 입력
	printf("두 개의 실수 입력 : ");
	scanf("%lf %lf", &num1, &num2); // 실수 2개 입력

	if (opt == 1)
		result = num1 + num2; // 1번을 입력했을때 해당의 result값 출력
	if (opt == 2)
		result = num1 - num2; // 2번을 입력했을때 해당의 result값 출력
	if (opt == 3)
		result = num1 * num2; // 3번을 입력했을때 해당의 result값 출력
	if (opt == 4)
		result = num1 / num2; // 4번을 입력했을때 해당의 result값 출력

	printf("결과 : %f \n", result); // result값 출력
	return 0;
}
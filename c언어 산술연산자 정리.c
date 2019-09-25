#include <stdio.h>
int main(void)
{
	int a, b;

	printf("두개의 정수를 입력하세요 : ");
	scanf("%d %d", &a, &b); // 두개 정수 입력( 예를들어 10과 3 입력)

	printf("%d + %d = %d \n", a, b, a + b); // 10 + 3
	printf("%d - %d = %d \n", a, b, a - b); // 10 - 3
	printf("%d X %d = %d \n", a, b, a*b); // 10 X 3
	printf("%d / %d = %d \n", a, b, a / b); // 10 나누기 3
	printf("%d 나머지 %d = %d \n", a, b, a%b); // 10 나누기 3의 나머지출력
	return 0;
}
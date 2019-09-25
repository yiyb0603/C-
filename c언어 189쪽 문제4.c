#include <stdio.h>
int main(void)
{
	int num1, num2;
	int result;

	printf("정수 두개를 입력하세요 : ");
	scanf("%d %d", &num1, &num2); // 정수 두개 입력

	result = (num1 < num2) ? num2 - num1 : num1 - num2; 
	/*위의 result문 해석 : num2가 num1보다 크면 앞에있는 num2 - num1을 계산 , 
	num2가 num1보다 큰게 아닐시에 가장 뒤에있는 num1-num2를 계산한다 . */
	printf("뺄셈 결과 : %d \n", result); // 뺄셈결과 최종 result값 출력
	return 0;
}
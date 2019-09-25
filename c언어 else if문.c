#include <stdio.h>
int main(void)
{
	int num1, num2;
	int cal;
	printf("정수 두개 입력하세요 : ");
	scanf("%d %d", &num1, &num2); // 정수 2개 입력

	printf("1 , 2 , 3 , 4중 하나만 입력하세요 : "); 
	scanf("%d", &cal); // 덧셈,뺄셈,나눗셈,곱셈 중에 하나만 선택하도록 수 입력 , cal에 저장

	if (cal == 1)
		printf("%d", num1 + num2); // 1번을 입력할시 덧셈
	else if (cal == 2)
		printf("%d", num1 - num2); // 윗조건이 아닐시 해당 else if문 출력 , 2번을 누를시 뺄셈
	else if (cal == 3)
		printf("%d", num1*num2); // 윗조건도 아닐시 해당 else if문 출력 , 3번을 누를시 곱셈
	else if (cal == 4)
		printf("%d", num1 / num2); // 윗조건도 아닐시 해당 else if문 출력 , 4번을 누를시 나눗셈
	else
		printf("당신은 입력할 자격이 없습니다.  \n"); // 모든 조건이 아닐시 출력

	return 0;
}
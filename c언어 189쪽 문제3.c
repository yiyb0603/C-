y#include <stdio.h>
int main(void)
{
	int a, b, c;
	int result;
	printf("점수를 각각 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);
	result = (a + b + c) / 3;  // **** 나눗셈을 해야할땐 덧셈을 괄호안에 넣고 나눗셈은 바깥으로 나오기 .**** 

	if (result >= 90)
		printf("당신의 학점은 A입니다 . \n"); // 90점 이상일경우 A출력
	else if (result >= 80)
		printf("당신의 학점은 B입니다. \n"); // 80점 이상일경우 B출력 ( 윗조건이 안맞을때)
	else if (result >= 70)
		printf("당신의 학점은 C입니다 . \n"); // 70점 이상일경우 C출력 ( 윗조건들이 안맞을때)
	else if (result >= 50)
		printf("당신의 학점은 D입니다 . \n"); //50점 이상일경우 D출력 (윗조건들이 안맞을때)
	else
		printf("당신의 학점은 F입니다 .\n"); // 아무것도 아닌경우 F출력 (윗조건들이 안맞을때)
	return 0;
}
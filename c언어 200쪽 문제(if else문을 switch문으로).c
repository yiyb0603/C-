#include <stdio.h>
int main(void)
{
	int a;
	printf("0이상의 정수를 하나 입력하세요 : ");
	scanf("%d", &a); // 정수 하나 입력
	/* 문제내용 : if else문에서 하나의 수를 입력받아 각종 논리연산자와 비교연산자를 이용해서
	결과값이 나오는 if else문을 switch문으로 바꿔야한다. */
	switch (a / 10)
	{      // 나누기 10을해서 십의자리수가 무엇이냐에따라 case가 갈린다.
	case 0:
		printf("0이상 10미만 \n");
		break;
	case 1:
		printf("10이상 20미만 \n");
		break; // 정수부분이 1일시 해당문장 출력후 switch문을 빠져나온다.
	case 2:
		printf("20이상 30미만 \n");
		break; // 정수부분이 2일시 해당문장 출력후 switch문을 빠져나온다.
	case 3:
		printf("30이상 40미만 \n");
		break; // 정수부분이 3일시 해당문장 출력후 switch문을 빠져나온다.
	default:
		printf("40이상 \n");
		break; // 정수부분이 4이상일시 해당문장 출력후 switch문을 빠져나온다.
	}
	return 0;
}
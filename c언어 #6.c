/*#include <stdio.h> 문제1
int main(void)
{
	int score;
	scanf_s("%d", &score);
	if (score <= 100 && score >= 90)
		printf("A");
	else if (score < 90 && score >= 80)
		printf("B");
	else if (score < 80 && score >= 70)
		printf("C");
	else if (score < 70 && score >= 60)
		printf("D");
	else 
		printf("E");
	return 0;
}*/
/*#include <stdio.h> 문제2
int main(void)
{
	int score;
	scanf_s("%d", &score);
	switch (score / 10)
	{
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("E");
		break;
	}
	return 0;
}*/
/*#include <stdio.h>
int main(void)
{
	int num, i, j;
	int isNotPrime;		// 소수인지 아닌지를 판별하는 변수
	scanf_s("%d", &num);
	for (i = num; i > 1; i--) {
		isNotPrime = 0;//소수인지 모르므로 0으로 초기화
		// 소수인지 아닌지 검사하는 반복문
		for (j = 2; j <= i-1; j++) {
			if (i % j == 0)		// 소수가 아니면
				isNotPrime = 1; // 소수가아니면 1 소수이면 0인상태
		}
		if (isNotPrime == 0)
			printf("%d ", i);
	}
	return 0;
}*/

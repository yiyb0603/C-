#include <stdio.h>
int main(void) // 문제 내용 : a를 입력하면 f가 출력되도록 코딩.
{
	char p;
	printf("문자를 하나 입력하세요 : ");
	scanf("%c", &p); // 문자 하나 입력 (예를들어 a를 입력)

	printf("%c", p + 5); // 문자에 +5를 더한값 출력 (아스키코드 에서 a는 97 , f는 102이므로 +5를 해준다.)
	return 0;
}
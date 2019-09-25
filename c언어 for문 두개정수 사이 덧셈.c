#include <stdio.h>
int main(void)
{
	int start, end, result;

	printf("두개의 정수를 입력하세요 ");
	scanf("%d %d", &start, &end); // 정수 입력 . (만약 3과 5를 입력했을때)

	for (result = 0; start <= end; start++) // 결과 = 0 ,   3 <=5 ,  start값이 5가 될때까지 연산 , <=가 아닌 <일때는 3+4만 출력.
		result += start; // result값은 start값을 모두 더한것.
		printf("%d", result); // result값 출력.

	return 0; // for문 조건이 끝남에 따라 return 0.
}
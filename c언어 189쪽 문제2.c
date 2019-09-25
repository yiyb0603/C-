#include <stdio.h>
int main(void)
{
	int a, b;
	int result1, result2;

	printf("두개의 정수를 입력하세요 : ");
	scanf("%d %d", &a, &b); // 두개의 정수 입력 ( 예를들어 4와 16입력)

	result1 = (a - b); // result1은 4에서 16을 뺄셈
	result2 = (b - a); // result2는 16에서 4를 뺄셈
	
	if (a < b) // 만약 b가 a보다 큰경우
		printf("%d", result2); // result2값인 16에서 4를 뺄셈을 한다.
	else // 그러나 아닐시에는
		printf("%d", result1); //result1값인 4에서 16을뺀다. (이건 4와 16을 입력으로 예시를 했기때문에 16 4를 입력하면 result1값이 출력된다.
		
	return 0;
}
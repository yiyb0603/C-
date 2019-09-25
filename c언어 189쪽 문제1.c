#include <stdio.h>
int main(void)
{
	int a;
	for (a = 1; a < 100; a++) { // 1에서 99까지 값이 들어간다.
		if (a % 7 == 0 || a % 9 == 0) // a가 7이랑 나누어 떨어지거나 a가 9랑 나누어떨어지면 출력 , OR연산자를 이용해서 7과 9의 공통배수는 한번출력
			printf("%d \n", a);
	}
	return 0;
}
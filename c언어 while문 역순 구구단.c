#include <stdio.h>
int main(void)
{
	int a, b = 9; // 곱해지는 수는 문자선언만, 곱하는수는 숫자까지 선언.

	printf("몇단인지 입력하세요 : ");
	scanf("%d", &a); // 몇단인지 입력 (예를들어 5 입력).

	while (b > 0) // 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 총 9번 출력이 되야함.
	{
		printf("%d X %d = %d \n", a, b, a*b); 
		b--; // 곱하는수가 9에서 1씩 점점 낮아짐.
	}
	return 0;
}
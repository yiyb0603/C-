#include <stdio.h>
int main(void)
{
	int num , i = 0; // while에 들어갈 i값을 0으로 선언

	printf("정수 하나 출력 : ");
	scanf("%d", &num); // 정수 입력 (예를들어 5입력)

	while (i< num) // == 0 < 5  ,   0에서 5까지 총 5번 출력 ( 0 , 1 , 2 , 3 , 4)
	{
		i++; // 처음에 i값 먼저 1씩 증가시키기 , 그이후에 똑같이 1씩증가.
		printf("%d \n", 3 * i); // 3곱하기 i값
	}

	return 0;
}
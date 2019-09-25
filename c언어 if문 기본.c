#include <stdio.h>
int main(void)
{
	int num;
	
	printf("정수 입력 : ");
	scanf("%d", &num); // 정수 입력

	if (num < 0) // 만약 입력한 수가 0보다 작을때
		printf("입력 값은 0보다 작다.  \n"); // <-- 출력
	if (num > 0) // 만약 입력한 수가 0보다 클때
		printf("입력 값은 0보다 크다.  \n"); // <-- 출력
	if (num == 0) // 만약 입력한 수가 0일때
		printf("입력 값은 0이다.  \n"); // <-- 출력

	return 0;
}
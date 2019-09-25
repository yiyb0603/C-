#include <stdio.h>
int main(void)
{
	int num, abs;
	printf("정수 입력 : ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1); // num값이 0보다 크면 num값 그대로 출력 , num값이 0보다 작으면 num *(-1)로 출력
	printf("절댓값 : %d \n", abs);
	return 0;
}
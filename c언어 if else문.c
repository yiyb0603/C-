#include <stdio.h>
int main(void)
{
	int num;
	
	printf("정수 입력 : ");
	scanf("%d", &num); // 정수 입력

	if (num < 0)
		printf("입력 값은 0보다 작다. \n"); // 만약 0보다 작은수를 입력할시 다음을 출력.

	else
		printf("입력 값은 0보다 작지 않다. \n"); // 0이나 0보다 큰수를 치면 다음을 출력.
	return 0;
}
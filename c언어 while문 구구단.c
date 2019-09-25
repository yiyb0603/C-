#include <stdio.h>
int main(void)
{
	int num, i = 0;

	printf("정수 하나 입력 : ");
	scanf("%d", &num); // 몇번 입력받을지 입력 (예를들어 6입력)

	while (i < 6) // i는 0 상태, i가 6이되면 멈춤 , 0 1 2 3 4 5 이렇게되어서 6번 출력.
	{
		printf("Hello World \n");
		i++; // 한번 반복할때마다 i값 1씩 증가.
	}
	return 0;
}
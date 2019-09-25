#include <stdio.h>
int main(void)
{
	int sum = 0, num = 0;

	while ( 1 )	// 괄호안에 0이 아닌 수가 들어갈시에는 항상 참이 성립되어 무한반복이 된다.
	{
		sum += num; // sum값에 num값을 더해준다
		if (sum > 5000)
			break; 
		num++; // sum이 5000을 넘길때까지 num을 계속 증가시키고 5000을 넘기는 순간에 break문으로 정지한다음 while문을 빠져나온다.
	}
	printf("sum : %d \n", sum); // sum값은 5050출력
	printf("num: %d \n", num); // num값은 100출력
	return 0;
}
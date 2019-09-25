#include <stdio.h>
int main(void)
{
	int total = 0 , num = 0; // total값과 num값 0으로 선언

	do // do while문 이기때문에 do로 먼저 실행
	{
		total += num; // total값 = total에다가 num을 더한값.
		num = num + 2; // num은 num에다가 2를 더한값. (0으로 시작) 
	} while (num < 101); // num이 101미만이 될때까지.

	printf("%d \n", total); // total값 출력
	return 0;
}
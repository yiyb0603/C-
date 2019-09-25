#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int num; // 여기서 int num은 전역변수로 사용된다. 따라서 각각 함수마다 굳이 선언 X

int 입력정수규칙대로출력(int num)
{
	if (num == 0)
		return;
	if (num < 10)  // 만약 num값이 10보다 작을경우 
		printf("%d\n", num);  //그대로 num값출력 (num값이 1의자리만 있을때) 
	else
	{
		입력정수규칙대로출력(num / 10); // 아닐시 <int 입력정수규칙대로출력> 함수에서 num / 10한값을 호출
		printf("%d\n", num % 10); // 나머지를 출력한다. 이때 0이될시 이 함수는 종료된다.
	}
}
int main(void)
{
	scanf("%d", &num); // num값 입력하기
	입력정수규칙대로출력(num); // <입력정수규칙대로출력> 함수 내용을 호출한다.
	return 0;
}
#include <stdio.h>
int main(void)
{
	int total = 0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은? :  "); 
	scanf("%d", &num); // num의 값 입력 (예를들어 5 입력)

	for (i = 0; i < num  ; i++) // i의 값 0선언 , 0 < 5 + 1 (6) 까지의 수 , i값 1씩증가
		total += i; // total값에 i값 덧셈.
	// 9번째문에서 +1이 없을시 0 , 1 , 2 , 3 , 4덧셈, +1이 있으면 0, 1 , 2 , 3 , 4 , 5 덧셈.
	printf("0부터 %d까지 덧셈결과 : %d \n", num, total);
	return 0;
}
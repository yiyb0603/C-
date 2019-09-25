#include <stdio.h>
int main(void)
{
	int num1 = 12;
	int num2 = 12; // num1과 num2값 12로 선언.

	printf("num1 : %d \n", num1); // num1값 출력.
	printf("num1++ : %d \n", num1++); // num1 뒤에 ++가 붙었으므로 나중에 1연산 따라서 12.
	printf("num1 : %d \n\n", num1); // 윗줄의 ++가 내려와서 1연산 따라서 13.

	printf("num2: %d \n", num2); // num2값 출력.
	printf("++num2 : %d \n", ++num2); // num2앞에 ++가 붙었으므로 바로 1연산 따라서 13.
	printf("num2 : %d \n", num2); // 연산된 num2값 출력.
	return 0;
}
#include <stdio.h>
int Absocompare(int num1, int num2); // 절댓값이 큰 변수 반환
int GetAbsoValue(int num); // 절대값을 반환 ( -값을 +로 )

int main(void)
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d와 %d중 절댓값이 큰수는 %d 입니다 . \n", num1, num2, Absocompare(num1, num2));
	return 0;
}
int GetAbsoValue(int num1 , int num2) {
	if (num1 < 0)
		num1 * -1;
	if (num2 < 0)
		num2 *-1;
	return  num1, num2;
}
int Absocompare(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}

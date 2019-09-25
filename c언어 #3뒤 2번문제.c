#include <stdio.h>
int main(void)
{
	double num;

	printf("실수 하나를 입력하세요 : ");
	scanf("%lf", &num); // double형 실수 입력
	/* yard = num * 91.44   */
	printf("%.1f yard = %.1f cm \n", num , num*91.44); // num은 소수점 첫째리까지 출력 , yard값 공식에 따라 num*91.44로 출력
	return 0;
}
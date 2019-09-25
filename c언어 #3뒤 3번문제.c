#include <stdio.h>
int main(void)
{
	double a, b; // double형 a,b
	double sum1, sum2; // sum1과 sum2값
	scanf("%lf %lf", &a, &b); // double a b값 실수 입력

	sum1 = (a*91.44); // sum1 = yard값 계산
	sum2 = (b*2.54); // sum2값 = inch(인치)값  계산

	printf("%.1f yd = %.1f cm  \n", a, sum1); // a값 소수점 첫째자리까지 출력 , sum1값 소수점 첫째자리까지 출력 / yard값
	printf("%.1f in = %.1f cm \n", b, sum2); // b값 소수점 첫째자리까지 출력 , sum2값 소수점 첫째자리까지 출력 / inch값
	return 0;
}
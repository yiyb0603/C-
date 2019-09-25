#include <stdio.h> // 문제 1
int main()
{
	int kr, ma, eng;
	int result;
	printf("점수 입력하셈 : ");
	scanf("%d %d %d", &kr, &ma, &eng);
	result = (kr + ma + eng) / 3;
	printf("당신 평균은 %.1f입니다 . \n", (double)result);
	return 0;
}

#include <stdio.h> // 문제 2
int main(void)
{
	int inch;
	printf("인치 입력 : ");
	scanf("%d", &inch);
	printf("%f \n", (double)inch * 2.54);
	return 0;
}
#include <stdio.h>//문제 3
int main(void)
{
	int a, b;
	printf("가로와 세로의 값을 입력 : ");
	scanf("%d %d", &a, &b);
	a += 8, b *= 3;
	printf("가로 : %d \n세로 : %d \n넓이 : %d \n", a, b, a*b);
	return 0;
}
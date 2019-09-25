/*유클리드 호제법(- 互除法, Euclidean algorithm)이란 2개의 자연수 또는 정식(整式)의 최대공약수를 구하는
알고리즘의 하나이다. 호제법이란 말은 두 수가 서로(互) 상대방 수를 나누어(除)서 결국 원하는 수를 얻는 알고리즘을 나타낸다.*/
#include <stdio.h>
int 최대공약수(int a, int b); // 최대공약수 변수

int main(void)
{
	int a, b;
	printf("두개의 정수를 입력하세요 : ");
	scanf("%d%d", &a, &b);
	printf("최대공약수는 %d입니다. \n", 최대공약수(a, b));
	return 0;
}
int 최대공약수(int a, int b)
{
	int i, j;
	int gdc;

	j = (a < b) ? a : b; // 예 : a = 5 , b = 25 이면  j = 5 이다.

	for (i = 1; i <= j; i++) { // 1 2 3 4 5로 증가
		if (a%i == 0 && b%i == 0) // a를 i로 나눴을때 나머지가 0이고 , b를 i로 나눴을때 나머지가 0이면 
			gdc = i; // gdc값은 i다.
	}
	return gdc; // gdc값을 반환해준다.
}
#include <stdio.h>
int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415; //  *sizeof : 자신이 사용하는 컴파일러의 자료형 별 바이트 크기를 확인할 수 있는 연산자.*
	printf("변수 ch의 크기 : %d \n", sizeof(ch)); // 변수 ch의 크기 출력
	printf("변수 inum의 크기 : %d \n", sizeof(inum)); // 변수 inum의 크기 출력
	printf("변수 dnum의 크기 : %d \n", sizeof(dnum)); // 변수 dnum의 크기 출력

	printf("char의 크기 : %d \n", sizeof(char)); // 자료형 char의 크기 출력
	printf("int의 크기 : %d \n", sizeof(int)); // 자료형 int의 크기 출력
	printf("long의 크기 : %d \n", sizeof(long)); // 자료형 long의 크기 출력
	printf(" long long의 크기 : %d \n", sizeof(long long)); // 자료형 long long의 크기 출력
	printf("float의 크기 : %d \n", sizeof(float)); // 자료형 float의 크기 출력
	printf("double의 크기 : %d \n", sizeof(double)); // 자료형 double의 크기 출력

	return 0;
}
/*지역변수는 중괄호안에서만 쓰여진다. 예)for문안에 int num*/
#include <stdio.h>
int main(void)
{
	int cnt; // main함수 cnt선언
	for (cnt = 0; cnt < 3; cnt++) // 0인 cnt가 3보다 작을때까지 반복
	{
		int num = 0; // 지역변수 num을 0으로 선언
		num++; // num값 증가
		printf("%d번째 반복, 지역변수 num은 %d. \n", cnt + 1, num); // cnt+1은 0+1이므로 1번째반복이고 , 0이였던 num이 1증가해서 지역변수 num은 1.
	}
	if (cnt == 3) // cnt가 3이되면 for문을 빠져나온다.
	{                   
		int num = 7; // 여기서는 지역변수를 7로 지정.
		num++; // num증가시키기
		printf("if문 내에 존재하는 지역변수 num은 %d. \n", num); // num값을 증가시켜서 8.
	}
	return 0;
} 
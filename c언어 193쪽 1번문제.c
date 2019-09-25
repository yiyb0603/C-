#include <stdio.h>
int main(void)
{
	int i, j;
	for (i = 1; i < 10; i++) { // i = 단 , j = 곱하는 수   ,  i값이 10보다 작다고 판단 될때까지 i증가시키기
		if (i % 2 !=0) // 나누어 안떨어지는 수는 제외 (1,3,5,7,9 등등)   
			continue; // 나누어 떨어지는 수는 진행(2,4,6,8 등등)
		for (j = 1; j < 10; j++) { //  j값이 10보다 작다고 판단 될때까지 j증가시키기
			if (i < j) 
				break; // 만약 j가 i보다 커질시에 반복문 중단
			printf("%d X %d = %d\n", i, j, i*j); // i값과 j값 출력된것 모두 계산
		}
	}
	return 0;
}
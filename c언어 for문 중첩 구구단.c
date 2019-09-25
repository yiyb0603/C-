#include <stdio.h>
int main(void)
{
	int cur, is; // cur과 is변수 선언.

	for (cur = 2; cur < 10; cur++) // cur값 2선언 , cur값은 10이상이되면 안됨 , cur1씩증가
	{
		for (is = 1; is < 10; is++) { // is값 1선언 , is값도 10이상이 되면 안됨 , is값 1씩증가
			printf("%d X %d = %d \n", cur, is, cur*is); // cur값 X is값 구구단 출력
		}
	}
	return 0;
}
#include <stdio.h>
int pibonachisooyeol(int num);

int main(void)
{
	int num;
	int i;
	printf("피보나치 수 입력하셈 : ");
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		printf("%d ", pibonachisooyeol(i));
	}
	return 0;
}

int pibonachisooyeol(int num)
{
	if (num == 0)
		return 0; 
	else if (num == 1)
		return 1; 
	else
		return pibonachisooyeol(num - 2) + pibonachisooyeol(num - 1);
}
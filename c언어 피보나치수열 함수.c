#include <stdio.h>
int pibonachisooyeol(int num);

int main(void)
{
	int num;
	int i;
	printf("�Ǻ���ġ �� �Է��ϼ� : ");
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
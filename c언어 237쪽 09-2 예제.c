#include <stdio.h>
static total;
int AddToTotal(int num)
{
	total += num;
	return total;
}
int main(void)
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("�Է�%d: ", i + 1);
		scanf("%d", &num);
		printf("���� : %d \n", AddToTotal(num));
	}
	return 0;
}
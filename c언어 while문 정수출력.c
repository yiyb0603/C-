/*#include <stdio.h> 문제1
int main(void)
{
	int num1;
	int a = 1;
	scanf("%d", &num1);
	while (num1 > 0 && a <= num1)
		printf("%d ", a++);
	return 0;
}*/
#include <stdio.h>// 문제2
int main(void)
{
	int num1;
	int a = 1;
	scanf("%d", &num1);
	while (num1 >= a )
		printf("%d ", num1--);
	return 0;
}
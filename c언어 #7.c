#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h> 문제1
int main(void)
{
	int num;
	int count = 0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i+=2) {
		if (i % 5 == 0)
			continue;
		(i % 2 == 0) ? " " : "\n";
		(count % 4 == 0) ? printf("\n") : " ";
		printf("%3d ", i);
		count++;
	}
	return 0;
}*/
/*#include <stdio.h> 문제2
int num1, num2, num3;
int max(int num1, int num2, int num3) {
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
		return("%d", num1);
	else if (num2 > num1 && num2 > num3)/		return("%d", num2);
	else if (num3 > num1 && num3 > num2)
	    return("%d", num3);
}
int main(void)
{
	printf("%d", max(num1, num2, num3));
	return 0;
}*/
#include <stdio.h> // 문제3
int asdf(int num) {
	if (num == 0)
		return;
	asdf(num / 2);
	printf("%d", num % 2);
}
int main()
{
	int num;
	scanf("%d", &num);
	asdf(num);
}
#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h> ����1
int main(void)
{
	int arr[10] = { 0 };
	int i, input, max = 0, max1 = 0;
	for (i = 0; i < 20; i++) {
		scanf("%d", &input);
		arr[input]++;
	}
	for (i = 0; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
			max1 = i;
		}
	}
	printf("%d %d", max1, max);
	return 0;
}*/
#include <stdio.h> // ����2
int main(void)
{
	int num, i;
	int max = 0, min = 9999;
	for (i = 0; i < 10; i++) {
		scanf("%d", &num);
		if (num < 100 && max < num) {
			max = num;
		}
		else if (num >= 100 && min > num) {
			min = num;
		}
	}
	if (max != 0 && min != 9999)
		printf("%d %d", max, min);
	else if (max != 0 && min == 9999)
		printf("%d ����", max);
	else if (max == 0 && min != 9999)
		printf("���� %d", min);
	else if (max == 0 && min == 9999)
		printf("���� ����");
	return 0;
}
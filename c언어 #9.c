#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*int main(void) 문제3
{
	int arr[100];
	int i = 0;
	int max;
	int min;
	for (i = 0; arr[i] != 999 && i <= 100; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 999)
			break;
	}
	max = arr[0];
	min = arr[0];
	for (i = 0; arr[i] != 999; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("max : %d \nmin : %d \n", max, min);
}*/
/*int main(void) 문제1
{
	int arr[100];
	int i = 0;
	int j = i;
	for (i = 0; i < 100; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
			break;
	}
	for (j = i; j >= 0; j--) {
		if (arr[j] > 0)
			printf("%d ", arr[j]);
	}
}*/
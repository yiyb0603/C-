#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, temp, min, index;
	int arr[10];
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
		for (i = 0; i < 10; i++) {
			min = 9999;
			for (j = i; j < 10; j++) {
				if (min > arr[j]) {
					min = arr[j];
					index = j;
				}
			}
			temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
		for (i = 0; i < 10; i++) {
			printf("%d ", arr[i]);
		}
	return 0;
}

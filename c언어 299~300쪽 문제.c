#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h> 巩力1
int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int i;
	int* ptr = &arr[0];
	for (i = 0; i < 5; i++) {
		*ptr += 2;
		*ptr++;
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}*/
/*#include <stdio.h> 巩力2
int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i;
	for (i = 0; i < 5; i++) {
		*(ptr++) += 2;
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}*/
/*#include <stdio.h> 巩力3
int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int sum = 0;
	int i;
	for (i = 0; i < 5; i++) {
		sum += *ptr--;
	}
	printf("%d", sum);
	return 0;
}*/
/*#include <stdio.h> 巩力4
int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = &arr[0];
	int* ptr2 = &arr[5];
	int i, temp;
	for (i = 0; i < 3; i++) {
		temp = *ptr1;
		*ptr1++ = *ptr2;
		*ptr2-- = temp;
	}
	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
}*/
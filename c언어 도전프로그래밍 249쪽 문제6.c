#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int second, h, m, s;
	scanf("%d", &second);

	for (h = 0; 3600 <= second; h++)
		second -= 3600;
	for (m = 0; 60 <= second; m++)
		second -= 60;
	for (s = 0; 1 <= second; s++)
		second -= 1;
	printf("h : %d , m : %d , s : %d", h, m, s);
	return 0;
}
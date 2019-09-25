/*#include <stdio.h> // 문제1
int main(void)
{
	int input, num = 1;
	int sum = 0;
	scanf("%d", &input);
	while (num <= input) {
		sum += num; 
		num++;
	}
	printf("%d", sum);
	return 0;
}*/

#include <stdio.h> // 문제3
int main(void)
{
	int a = 1;
	int count = 0;
	int sum = 0;
	double avg = 0.0;

	while (0<=a && a<=100) {
		scanf("%d", &a);
		sum += a;	
		count++;
	}
	sum -= a;
	avg = (double)sum / (count - 1);
	printf("sum : %d \navg : %.1f", sum, avg);
	return 0;
}
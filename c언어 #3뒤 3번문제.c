#include <stdio.h>
int main(void)
{
	double a, b; // double�� a,b
	double sum1, sum2; // sum1�� sum2��
	scanf("%lf %lf", &a, &b); // double a b�� �Ǽ� �Է�

	sum1 = (a*91.44); // sum1 = yard�� ���
	sum2 = (b*2.54); // sum2�� = inch(��ġ)��  ���

	printf("%.1f yd = %.1f cm  \n", a, sum1); // a�� �Ҽ��� ù°�ڸ����� ��� , sum1�� �Ҽ��� ù°�ڸ����� ��� / yard��
	printf("%.1f in = %.1f cm \n", b, sum2); // b�� �Ҽ��� ù°�ڸ����� ��� , sum2�� �Ҽ��� ù°�ڸ����� ��� / inch��
	return 0;
}
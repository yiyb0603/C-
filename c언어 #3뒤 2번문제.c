#include <stdio.h>
int main(void)
{
	double num;

	printf("�Ǽ� �ϳ��� �Է��ϼ��� : ");
	scanf("%lf", &num); // double�� �Ǽ� �Է�
	/* yard = num * 91.44   */
	printf("%.1f yard = %.1f cm \n", num , num*91.44); // num�� �Ҽ��� ù°������ ��� , yard�� ���Ŀ� ���� num*91.44�� ���
	return 0;
}
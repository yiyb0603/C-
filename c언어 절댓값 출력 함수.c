#include <stdio.h>
int Absocompare(int num1, int num2); // ������ ū ���� ��ȯ
int GetAbsoValue(int num); // ���밪�� ��ȯ ( -���� +�� )

int main(void)
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d�� %d�� ������ ū���� %d �Դϴ� . \n", num1, num2, Absocompare(num1, num2));
	return 0;
}
int GetAbsoValue(int num1 , int num2) {
	if (num1 < 0)
		num1 * -1;
	if (num2 < 0)
		num2 *-1;
	return  num1, num2;
}
int Absocompare(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}

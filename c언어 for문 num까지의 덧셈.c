#include <stdio.h>
int main(void)
{
	int total = 0;
	int i, num;
	printf("0���� num������ ����, num��? :  "); 
	scanf("%d", &num); // num�� �� �Է� (������� 5 �Է�)

	for (i = 0; i < num  ; i++) // i�� �� 0���� , 0 < 5 + 1 (6) ������ �� , i�� 1������
		total += i; // total���� i�� ����.
	// 9��°������ +1�� ������ 0 , 1 , 2 , 3 , 4����, +1�� ������ 0, 1 , 2 , 3 , 4 , 5 ����.
	printf("0���� %d���� ������� : %d \n", num, total);
	return 0;
}
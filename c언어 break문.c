#include <stdio.h>
int main(void)
{
	int sum = 0, num = 0;

	while ( 1 )	// ��ȣ�ȿ� 0�� �ƴ� ���� ���ÿ��� �׻� ���� �����Ǿ� ���ѹݺ��� �ȴ�.
	{
		sum += num; // sum���� num���� �����ش�
		if (sum > 5000)
			break; 
		num++; // sum�� 5000�� �ѱ涧���� num�� ��� ������Ű�� 5000�� �ѱ�� ������ break������ �����Ѵ��� while���� �������´�.
	}
	printf("sum : %d \n", sum); // sum���� 5050���
	printf("num: %d \n", num); // num���� 100���
	return 0;
}
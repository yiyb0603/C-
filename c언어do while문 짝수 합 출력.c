#include <stdio.h>
int main(void)
{
	int total = 0 , num = 0; // total���� num�� 0���� ����

	do // do while�� �̱⶧���� do�� ���� ����
	{
		total += num; // total�� = total���ٰ� num�� ���Ѱ�.
		num = num + 2; // num�� num���ٰ� 2�� ���Ѱ�. (0���� ����) 
	} while (num < 101); // num�� 101�̸��� �ɶ�����.

	printf("%d \n", total); // total�� ���
	return 0;
}
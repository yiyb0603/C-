#include <stdio.h>
int main(void)
{
	int cur, is; // cur�� is���� ����.

	for (cur = 2; cur < 10; cur++) // cur�� 2���� , cur���� 10�̻��̵Ǹ� �ȵ� , cur1������
	{
		for (is = 1; is < 10; is++) { // is�� 1���� , is���� 10�̻��� �Ǹ� �ȵ� , is�� 1������
			printf("%d X %d = %d \n", cur, is, cur*is); // cur�� X is�� ������ ���
		}
	}
	return 0;
}
#include <stdio.h>
int main(void)
{
	int num1, num2;
	int cal;
	printf("���� �ΰ� �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2); // ���� 2�� �Է�

	printf("1 , 2 , 3 , 4�� �ϳ��� �Է��ϼ��� : "); 
	scanf("%d", &cal); // ����,����,������,���� �߿� �ϳ��� �����ϵ��� �� �Է� , cal�� ����

	if (cal == 1)
		printf("%d", num1 + num2); // 1���� �Է��ҽ� ����
	else if (cal == 2)
		printf("%d", num1 - num2); // �������� �ƴҽ� �ش� else if�� ��� , 2���� ������ ����
	else if (cal == 3)
		printf("%d", num1*num2); // �����ǵ� �ƴҽ� �ش� else if�� ��� , 3���� ������ ����
	else if (cal == 4)
		printf("%d", num1 / num2); // �����ǵ� �ƴҽ� �ش� else if�� ��� , 4���� ������ ������
	else
		printf("����� �Է��� �ڰ��� �����ϴ�.  \n"); // ��� ������ �ƴҽ� ���

	return 0;
}
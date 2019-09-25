#include <stdio.h>

int insert(int *arr) // ������ ����
{
	int gaesoo, i = 0;
	printf("\n������ �������� ���� �Է� : ");
	scanf("%d", &gaesoo);
	int start = found(arr, -1);
	printf("������ ������ �Է� : ");
	for (i = start; i < start + gaesoo; i++) {
		scanf("%d", &arr[i]);	 // ��� ( -1 �� �迭�Ȱ�) ���� gaesoo ���� �迭 �Է� 
	}
}

int print(int *arr) // ������ ���
{
	int i;
	for (i = 0; i < 100; i++)
	{
		if (arr[i] == -1)
			break; // ���� -1�� �迭�� ������, �ߴ�
		else
			printf("%d ", arr[i]); // ���� �迭���� �ݺ��� ����, ���� �迭���� -1�� �ƴҰ��, �ش� �迭 �� ���
	}
}

int found(int *arr, int num) // ������(�ε���) ��ȸ, num���� -1 �� ����
{
	int i;
	for (i = 0; i < 100; i++) {
		if (arr[i] == num)
			return i;
	}
}

int delete(int * arr) { // ������ ����
	int del, i;
	printf("\n������ ������ �Է����ּ��� : ");
	scanf("%d", &del);
	int start;
	int end = found(arr, -1); // found �Լ��� ȣ�� �ؼ� �迭���� ���� ���ָ�, -1�� ���� �ڸ� (������ �ڸ�) �˻�
	while (1) // ���ѹݺ��� �ɾ��ְ�, Ż�� ���� while�� �ȿ� �ۼ�
	{
		start = found(arr, del);
		for (i = start; i < end; i++) {
			arr[i] = arr[i + 1]; // ������ ��ĭ�� �ű�
		}
		if (start > end)
			break;  // -1 �� �ִ� �ε��� ���� ���ڰ� Ŀ���� �ߴ�
	}
}

int main(void) {
	int arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = -1;     // ��� �迭���� -1 ����
	}
	insert(arr);
	print(arr);
	insert(arr);
	print(arr);
	delete(arr);
	print(arr);
	delete(arr);
	print(arr);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h>
int main(void)
{
	char str[1000];
	int sum = 0;
	int size = sizeof(str) / sizeof(char);
	printf("���ܾ �Է��ϼ��� : ");
	scanf("%s", str);

	for (int i = 0; i < size; i++) {
		if (str[i] == 0)
			break;
		else 
			sum += 1;
	}
	printf("�Է��Ͻ� ���ܾ��� ���̴� %d �Դϴ�.", sum);
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[1000];
	int size, buffer;
	printf("���ܾ �Է����ּ��� : ");
	scanf("%s", str);

	for (int i = 0; str[i]; i++) {
		size = i - 1;
		for (i = 0; i < size / 2; i++) {
			buffer = str[i];
			str[i] = str[size - i];
			str[size - i] = buffer;
		}
	}
	printf("�Է��� ���ܾ�� %s �Դϴ� . \n", str);
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int size,i;
	char bignumber = 0;
	char word[50]; // word�� 50�� ���ϱ��� ����
	size = sizeof(word) / sizeof(char); // size���� word���� char���� ������.
	scanf("%s", word); // ���ڿ� �Է¹ޱ�
	while (word[size] != '\0') {
		size++; // word�� �ι��ڰ� �ȵǸ� size���� �ø��� (�ݺ����̿��� �ι��ڰ� �ɶ����� ����Ѵ�)
	}
	for (i = 0; i < size; i++)
		if (bignumber < word[i]) << �̺κ��� �߿��ϴ�.
			bignumber = word[i];
		printf("%c",bignumber);
	return 0;
}*/
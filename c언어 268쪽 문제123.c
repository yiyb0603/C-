#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h>
int main(void)
{
	char str[1000];
	int sum = 0;
	int size = sizeof(str) / sizeof(char);
	printf("영단어를 입력하세요 : ");
	scanf("%s", str);

	for (int i = 0; i < size; i++) {
		if (str[i] == 0)
			break;
		else 
			sum += 1;
	}
	printf("입력하신 영단어의 길이는 %d 입니다.", sum);
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[1000];
	int size, buffer;
	printf("영단어를 입력해주세요 : ");
	scanf("%s", str);

	for (int i = 0; str[i]; i++) {
		size = i - 1;
		for (i = 0; i < size / 2; i++) {
			buffer = str[i];
			str[i] = str[size - i];
			str[size - i] = buffer;
		}
	}
	printf("입력한 영단어는 %s 입니다 . \n", str);
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int size,i;
	char bignumber = 0;
	char word[50]; // word는 50자 이하까지 받음
	size = sizeof(word) / sizeof(char); // size값을 word값과 char값을 나눈다.
	scanf("%s", word); // 문자열 입력받기
	while (word[size] != '\0') {
		size++; // word가 널문자가 안되면 size값을 올린다 (반복문이여서 널문자가 될때까지 계속한다)
	}
	for (i = 0; i < size; i++)
		if (bignumber < word[i]) << 이부분이 중요하다.
			bignumber = word[i];
		printf("%c",bignumber);
	return 0;
}*/
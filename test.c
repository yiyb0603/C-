#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h> 문제1
int main(void)
{
	int arr[100];
	int i;
	int total = 0;
	int total1 = 0;
	double result = 0;
	double total2 = 0;
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 0) {
			break;
		}
		if (arr[i] % 5 == 0) {
			total += arr[i];
		}
		if (arr[i] % 5 == 0) {
			total1++;
		}
		if (arr[i] % 5 == 0) {
			total2 += arr[i];
			result = (total2) / total1;
		}
	}
	printf("%d %d %.1f", total1, total, result);
	return 0;
}*/
#include <stdio.h> // 문제2
int main(void)
{
	char str[] = "SHIN HEE SONG";
	char alpha;
	scanf("%c", &alpha);
	switch (alpha)
	{
	case 'S':
		printf("sHIN HEE sONG");
		break;
	case 'H':
		printf("ShIN hEE SONG");
		break;
	case 'I':
		printf("SHiN HEE SONG");
		break;
	case 'N':
		printf("SHIn HEE SOnG");
		break;
	case 'E':
		printf("SHIN Hee SONG");
		break;
	case 'O':
		printf("SHIN HEE SoNG");
		break;
	case 'G':
		printf("SHIN HEE SONg");
		break;
	default:
		printf("ERROR");
		break;
	}
	return 0;
}
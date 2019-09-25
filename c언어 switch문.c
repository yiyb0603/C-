#include <stdio.h>
int main(void)
{
	int num;
	printf("1이상 5이하의 정수 입력하세요 : ");
	scanf("%d", &num); // 정수입력

	switch (num) {
	case 1:
		printf("1은 one \n");
		break; // 1번을 입력했을시 해당문장 출력, switch문 빠져나옴
	case 2:
		printf("2는 two \n");
		break;// 2번을 입력했을시 해당문장 출력, switch문 빠져나옴
	case 3:
		printf("3은 three \n");
		break;// 3번을 입력했을시 해당문장 출력, switch문 빠져나옴
	case 4:
		printf("4는 four \n");
		break;// 4번을 입력했을시 해당문장 출력, switch문 빠져나옴
	case 5:
		printf("5는 five \n");
		break;// 5번을 입력했을시 해당문장 출력, switch문 빠져나옴
	default:
		printf("당신은 입력할 자격이 없네요. 나가세요 \n");// 다른정수를 입력했을시 해당문장 출력
	}
    return 0;
}
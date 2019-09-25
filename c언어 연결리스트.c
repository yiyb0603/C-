#include <stdio.h>

int insert(int *arr) // 데이터 삽입
{
	int gaesoo, i = 0;
	printf("\n삽입할 데이터의 개수 입력 : ");
	scanf("%d", &gaesoo);
	int start = found(arr, -1);
	printf("삽입할 데이터 입력 : ");
	for (i = start; i < start + gaesoo; i++) {
		scanf("%d", &arr[i]);	 // 빈곳 ( -1 이 배열된곳) 부터 gaesoo 까지 배열 입력 
	}
}

int print(int *arr) // 데이터 출력
{
	int i;
	for (i = 0; i < 100; i++)
	{
		if (arr[i] == -1)
			break; // 값이 -1인 배열을 만날시, 중단
		else
			printf("%d ", arr[i]); // 받은 배열에서 반복문 실행, 만약 배열값이 -1이 아닐경우, 해당 배열 값 출력
	}
}

int found(int *arr, int num) // 데이터(인덱스) 조회, num값에 -1 들어가 있음
{
	int i;
	for (i = 0; i < 100; i++) {
		if (arr[i] == num)
			return i;
	}
}

int delete(int * arr) { // 데이터 삭제
	int del, i;
	printf("\n삭제할 정수를 입력해주세요 : ");
	scanf("%d", &del);
	int start;
	int end = found(arr, -1); // found 함수를 호출 해서 배열값을 전달 해주며, -1이 들어가는 자리 (마지막 자리) 검색
	while (1) // 무한반복을 걸어주고, 탈출 조건 while문 안에 작성
	{
		start = found(arr, del);
		for (i = start; i < end; i++) {
			arr[i] = arr[i + 1]; // 옆으로 한칸씩 옮김
		}
		if (start > end)
			break;  // -1 이 있는 인덱스 보다 숫자가 커질시 중단
	}
}

int main(void) {
	int arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = -1;     // 모든 배열값에 -1 투입
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
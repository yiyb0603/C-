#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


int Scan() {
	int num;
	scanf("%d", &num);
	return num;
}


void pri() {
	system("cls");
	printf("\n\n[0] ��ü ����\n");
	printf("[1] �̼���\n");
	printf("[2] �����\n");
	printf("[3] ������\n");
	printf("[4] ��ȣ��\n");
	printf("[5] ������\n");
	printf("[6] �ȿ���\n");
	printf("[7] ������\n");
	printf("[8] �躸��\n");
	printf("[9] ���伷\n");
	printf("[10] �����\n");
	printf("[11] ������\n");
	printf("[12] ������\n");
	printf("[13] �赿��\n");
	printf("[14] ���ȣ\n");
}

int sign() {
	int j;
	printf("\n\n   [System]");
	printf("\n[0] ���α׷� ����");
	printf("\n[1] ������ �α���");
	printf("\n[2] ��/��� ��Ȳ\n\n");
	j = Scan();
	return j;
}


int main() {
	char id[100];
	char ps[100];
	int num1 = 4, num2, num3;
	int input = 1, k;
	char now2[14] = { 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' };
	char now[14] = { '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?' };
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	while (input != 0 || num1 != 0) {
		k = 0;
		while (k != 1 && num1 == 4) {
			input = sign();
			switch (input)
			{
			case 0:
				return 0;
			case 1:
				system("cls");
				printf("[Login] ID : ");
				scanf("%s", id);
				printf("[Login] PASSWORD : ");
				scanf("%s", ps);
				if (strcmp(id, "admin") == 0 && strcmp(ps, "1234") == 0) {
					system("cls");
					num1 = 1;
					printf("\n\n[System] ������ �α��ο� �����Ͽ����ϴ�.");
					k++;
				}
				else {
					system("cls");
					printf("\n\n[System] ���̵� �Ǵ� ��й�ȣ�� Ʋ�Ƚ��ϴ�.");
				}
				break;
			case 2:
				system("cls");
				printf("\n\n��  ����        ��ȭ��ȣ     ��(O)/���(X)   ����(o,x) ��\n");
				printf("��                                                     ��\n");
				printf("��                                                     ��\n");
				printf("�� �̼��� 010 - xxxx - xxxx        %c            %c      ��\n", now[0], now2[0]);
				printf("�� ����� 010 - xxxx - xxxx        %c            %c      ��\n", now[1], now2[1]);
				printf("�� ������ 010 - xxxx - xxxx        %c            %c      ��\n", now[2], now2[2]);
				printf("�� ��ȣ�� 010 - xxxx - xxxx        %c            %c      ��\n", now[3], now2[3]);
				printf("�� ������ 010 - xxxx - xxxx        %c            %c      ��\n", now[4], now2[4]);
				printf("�� �ȿ��� 010 - xxxx - xxxx        %c            %c      ��\n", now[5], now2[5]);
				printf("�� ������ 010 - xxxx - xxxx        %c            %c      ��\n", now[6], now2[6]);
				printf("�� �躸�� 010 - xxxx - xxxx        %c            %c      ��\n", now[7], now2[7]);
				printf("�� ���伷 010 - xxxx - xxxx        %c            %c      ��\n", now[8], now2[8]);
				printf("�� ����� 010 - xxxx - xxxx        %c            %c      ��\n", now[9], now2[9]);
				printf("�� ������ 010 - xxxx - xxxx        %c            %c      ��\n", now[10], now2[10]);
				printf("�� ������ 010 - xxxx - xxxx        %c            %c      ��\n", now[11], now2[11]);
				printf("�� �赿�� 010 - xxxx - xxxx        %c            %c      ��\n", now[12], now2[12]);
				printf("�� ���ȣ 010 - xxxx - xxxx        %c            %c      ��\n", now[13], now2[13]);
				printf("��                                                     ��\n");
				printf("�Ʀ�����������������������������������������������������������������������������������������������������������");
				break;
			default:
				system("cls");
				printf("[System] �߸� �Է��ϼ̽��ϴ�.");
				break;
			}
		}
		while (num1 != 0 && num1 != 4) {
			printf("\n\n     [System]\n[0] ���α׷� ����\n[1] ��/��� ��Ȳ\n[2] ����� ����\n[3] ���� ����\n[4] �α׾ƿ�\n");
			num1 = Scan();
			switch (num1)
			{
			case 0: //2 �Է�
				return 0;
				break;
			case 1: //1 �Է�
				//��� ���
				system("cls");
				printf("\n\n��  ����        ��ȭ��ȣ     ��(O)/���(X)   ����(o,x) ��\n");
				printf("��                                                     ��\n");
				printf("��                                                     ��\n");
				printf("�� �̼��� 010 - xxxx - xxxx        %c            %c      ��\n", now[0], now2[0]);
				printf("�� ����� 010 - xxxx - xxxx        %c            %c      ��\n", now[1], now2[1]);
				printf("�� ������ 010 - xxxx - xxxx        %c            %c      ��\n", now[2], now2[2]);
				printf("�� ��ȣ�� 010 - xxxx - xxxx        %c            %c      ��\n", now[3], now2[3]);
				printf("�� ������ 010 - xxxx - xxxx        %c            %c      ��\n", now[4], now2[4]);
				printf("�� �ȿ��� 010 - xxxx - xxxx        %c            %c      ��\n", now[5], now2[5]);
				printf("�� ������ 010 - xxxx - xxxx        %c            %c      ��\n", now[6], now2[6]);
				printf("�� �躸�� 010 - xxxx - xxxx        %c            %c      ��\n", now[7], now2[7]);
				printf("�� ���伷 010 - xxxx - xxxx        %c            %c      ��\n", now[8], now2[8]);
				printf("�� ����� 010 - xxxx - xxxx        %c            %c      ��\n", now[9], now2[9]);
				printf("�� ������ 010 - xxxx - xxxx        %c            %c      ��\n", now[10], now2[10]);
				printf("�� ������ 010 - xxxx - xxxx        %c            %c      ��\n", now[11], now2[11]);
				printf("�� �赿�� 010 - xxxx - xxxx        %c            %c      ��\n", now[12], now2[12]);
				printf("�� ���ȣ 010 - xxxx - xxxx        %c            %c      ��\n", now[13], now2[13]);
				printf("��                                                     ��\n");
				printf("�Ʀ�����������������������������������������������������������������������������������������������������������");
				break;
			case 2: //2 �Է�
				//������ ����
				pri(); //������ ��� ���

				num2 = Scan();
				if (num2 < 0 || num2 >= 15) {
					system("cls");
					printf("\n\n[System] �ùٸ� ���� �Է��Ͻʽÿ�.\n");
					break;
				}
				system("cls");
				printf("\n\n[1] ���\n[2] ���\n");
				num3 = Scan();
				system("cls");
				if (num3 == 1 && num2 == 0) { //��� ���� �� ��� �Է�
					for (int i = 0; i < 14; i++) {
						now[i] = 'O';
					}
					printf("\n\n[System] ���������� �����Ͽ����ϴ�.\n");
				}
				else if (num3 == 2 && num2 == 0) { //��� ���� �� ��� �Է�
					for (int i = 0; i < 14; i++) {
						now[i] = 'X';
					}
					printf("\n\n[System] ���������� �����Ͽ����ϴ�.\n");
				}
				else if (num3 == 2 && now[num2 - 1] == 'X') { //��� ���� �� ����� �Է� �ҽ�
					printf("\n\n[System] �̹� ��� �ϼ̽��ϴ�.\n");
				}
				else if (num3 == 1 && now[num2 - 1] == 'O') { //��� ���� �� ����� �Է� �ҽ�
					printf("\n\n[System] �̹� ��� �ϼ̽��ϴ�.\n");
				}
				else if (num3 == 1 && num2 > 0 && num2 < 15) {
					now[num2 - 1] = 'O';
					printf("\n\n[System] ���������� �����Ͽ����ϴ�.\n");
				}
				else if (num3 == 2 && num2 > 0 && num2 < 15) {
					now[num2 - 1] = 'X';
					printf("\n\n[System] ���������� �����Ͽ����ϴ�.\n");
				}
				else {
					printf("\n\n[System] �ùٸ� ���� �Է��Ͻʽÿ�.\n");
				}
				break;

			case 3: //3 �Է�
				//������ ����
				pri(); //������ ��� ���
				num2 = Scan();
				if (num2 < 0 || num2 >= 15) {
					system("cls");
					printf("\n\n[System] �ùٸ� ���� �Է��Ͻʽÿ�.\n");
					break;
				}
				system("cls");
				printf("\n\n[1] ����\n[2] ����\n");
				num3 = Scan();
				system("cls");
				if (num3 == 1 && num2 == 0) { //��� ���� �� ���� �Է� ��
					for (int i = 0; i < 14; i++) {
						now2[i] = 'x';
					}
					printf("\n\n[System] ���������� �����Ͽ����ϴ�.\n");
				}
				else if (num3 == 2 && num2 == 0) { //��� ���� �� ���� �Է� ��
					for (int i = 0; i < 14; i++) {
						now2[i] = 'o';
					}
					printf("\n\n[System] ���������� �����Ͽ����ϴ�.\n");
				}
				else if (num3 == 2 && now2[num2 - 1] == 'o') {
					printf("\n\n[System] �̹� ���� ���Դϴ�.\n");
				}
				else if (num3 == 1 && now2[num2 - 1] == 'x') {
					printf("\n\n[System] �̹� ���� ���� �ƴմϴ�.\n");
				}
				else if (num3 == 1 && num2 > 0 && num2 < 15) {
					now2[num2 - 1] = 'x';
					printf("\n\n[System] ���������� �����Ͽ����ϴ�.\n");
				}
				else if (num3 == 2 && num2 > 0 && num2 < 15) {
					now2[num2 - 1] = 'o';
					printf("\n\n[System] ���������� �����Ͽ����ϴ�.\n");
				}
				else {
					printf("\n\n[System] �ùٸ� ���� �Է��Ͻʽÿ�.\n");
				}
				break;
			case 4:
				system("cls");
				printf("\n\n[System] �α׾ƿ� �Ǿ����ϴ�.\n\n");
				break;
			default:
				system("cls");
				printf("\n\n[System] �߸� �Է��ϼ̽��ϴ�.\n");
				break;
			}
		}
	}
}
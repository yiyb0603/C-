#include <stdio.h> // ���� 1
int main()
{
	int kr, ma, eng;
	int result;
	printf("���� �Է��ϼ� : ");
	scanf("%d %d %d", &kr, &ma, &eng);
	result = (kr + ma + eng) / 3;
	printf("��� ����� %.1f�Դϴ� . \n", (double)result);
	return 0;
}

#include <stdio.h> // ���� 2
int main(void)
{
	int inch;
	printf("��ġ �Է� : ");
	scanf("%d", &inch);
	printf("%f \n", (double)inch * 2.54);
	return 0;
}
#include <stdio.h>//���� 3
int main(void)
{
	int a, b;
	printf("���ο� ������ ���� �Է� : ");
	scanf("%d %d", &a, &b);
	a += 8, b *= 3;
	printf("���� : %d \n���� : %d \n���� : %d \n", a, b, a*b);
	return 0;
}
#include <stdio.h>

double CelToFah(double c)
{
	return 1.8*c + 32;
}
double FahToCel(double f)
{
	return (f - 32) / 1.8;
}
int main(void)
{
	int sel;
	double num;
	printf("1ÀÌ¶û 2Áß¿¡ ÇÏ³ª ¼±ÅÃÇÏ»ï : ");
	scanf("%d", &sel);
	if (sel == 1)
	{
		printf("¼·¾¾ ÀÔ·Â : ");
		scanf("%lf", &num);
		printf("º¯È­µÈ È­¾¾ : %f\n", CelToFah(num));
	}
	else if (sel == 2)
	{
		printf("È­¾¾ ÀÔ·Â : ");
		scanf("%lf", &num);
		printf("º¯È­µÈ ¼·¾¾ : %f\n", FahToCel(num));
	}
	else
		printf("¾Æ ¼±ÅÃÇÏÁö¸¶¼À °Á \n");
	return 0;
}
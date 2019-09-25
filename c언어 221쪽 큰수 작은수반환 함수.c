#include <stdio.h>
int keunsoobanhwan(int num1, int num2, int num3);  
int jakeunsoobanhwan(int num1, int num2, int num3); 

int main(void)
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("큰수: %d\n작은수: %d\n", keunsoobanhwan(num1, num2, num3), jakeunsoobanhwan(num1, num2, num3));
	return 0;
}
int keunsoobanhwan(int num1, int num2,int num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	if (num3 > num1 && num3 > num2)
		return num3;
}
int jakeunsoobanhwan(int num1, int num2, int num3) {
	if (num1 < num2 && num1 < num3)
		return num1;
	if (num2 < num1 && num2 < num3)
		return num2;
	if (num3 < num2 && num3 < num2)
		return num3;
}
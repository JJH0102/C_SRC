#include <stdio.h>
#include <string.h>

int main(void)
{
	int num1 = 0, num2 = 0, sum = 0;
	
	printf("정수형 숫자1 입력 : ");
	scanf("%d", &num1);
	
	sum = num1 + num2;
	
	printf("%d + %d = %d\n", num1, num2, sum);
	
	return 0;
}

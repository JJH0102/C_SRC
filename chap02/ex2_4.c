#include <stdio.h>

int main(void)
{
	printf("%05d\n", 10); // 5자리로 맞추고 공백이 생기면 0으로 채움
	printf("%05d\n", 100);
	printf("%05d\n", 1000);
	
	printf("------------------------\n");
	
	printf("%d\n", 10); 
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);
	
	printf("------------------------\n");
	
	printf("%6.1lf\n", 3.4);
	printf("%6.1lf\n", 31.7);
	
	printf("------------------------\n");
	
	printf("%d의 2진수 값은 %b입니다.\n", 10, 10); // 2진수 출력 
	printf("%d의 8진수 값은 %o입니다.\n", 10, 10); // 8진수 출력
	printf("%d의 16진수 값은 %x입니다.\n", 10, 10); // 16진수 출력
	
	printf("------------------------\n");
	
	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	
	return 0;
}

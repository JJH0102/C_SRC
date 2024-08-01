#include <stdio.h>

int main(void)
{
	int num = 12;
	
	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);
	printf("%d\n", 0b1010); // 2진수
	
	printf("------------------------\n");
	
	printf("%x\n", 12);
	printf("%X\n", 12);
	
	printf("------------------------\n");
	
	printf("%d\n", 'A'); // 'A'는 문자이지만 %d로 출력할 경우 아스키 코드로 처리되어 출력
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "first");
	
	printf("------------------------\n");
	
	printf("%d\n", 1e4);
	printf("%lf\n", 1e4);
	
	printf("%d\n", sizeof(10));
	printf("%d\n", sizeof(10.0));
	
	return 0;
}

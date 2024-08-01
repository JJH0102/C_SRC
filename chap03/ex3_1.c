#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = a, c = a + 20;
	double da = 3.5;
	char ch = 'A';
	
	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);
	
	printf("--------------------------\n");
	
	char ch1 = 'A';
	char ch2 = 65;
	
	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
	printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);
	
	printf("--------------------------\n");
	
	long long lln = 123456789012345678901234567890;
	short sh = 32767;
	
	printf("long long : %lld\n", lln);
	printf("short : %d\n", sh);
	
	return 0;
}

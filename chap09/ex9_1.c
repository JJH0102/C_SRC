#include <stdio.h>

int main(void)
{
    double b;
    char c;

    int a;
    int *pa;

    pa = &a;    // 포인터에 a의 주소 대입
    *pa = 10;   // 포인터로 변수 a에 10 대입

    printf("a 변수의 주소 : %p\n", &a);
    printf("pa에 저장된 변수의 주소 : %p\n", pa);

    printf("포인터로 a 값 출력 : %d\n", *pa);
    printf("변수명으로 a 값 출력 : %d\n", a);

	return 0;
}
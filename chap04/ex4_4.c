#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;
	
	pre = (++a) * 3; // 1. a = a + 1, 2. pre = a * 3 
	post = (b++) * 3; // 1. post = b * 3, 2. b = b + 1g
	// * 1번 2번 순서로 진행되므로 값이 다름
	
	printf("증감 연산 후 초깃값 a = %d, b = %d\n", a, b);
	printf("전위형 : (a++) * 3 = %d, 후위형 : (b++) * 3 = %d\n", pre, post);
	
	return 0;
}

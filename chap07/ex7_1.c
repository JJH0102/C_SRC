#include <stdio.h>

// 함수 구현(정의)
int sum(int x, int y) 
{
    int temp;

    temp = x + y;

    return temp; // 반환값
}

int main()
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b); // 함수 호출

    printf("%d\n", result);

    return 0;
}
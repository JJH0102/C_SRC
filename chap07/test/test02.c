#include <stdio.h>

void sum(int b, int a);

int main()
{
    sum(5, 10);
    sum(60, 100);
    
    return 0;
}

void sum(int b, int a)
{
    int result = 0;
    int i;

    for (i = b; i <= a; i++) {
        result += i;
    }

    printf("%d부터 %d까지의 합은 %d입니다.\n", b, a, result);
}
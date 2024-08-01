#include <stdio.h>

int main()
{
    int num = 0;
    int i, j;

    printf("2 이상의 정수를 입력하세요 : ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++) {
        if ( (i % 1) == 0 && (i % i) == 0) { 
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
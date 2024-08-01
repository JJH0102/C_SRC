#include <stdio.h>

int main()
{
    int i, j;
    int num = 0;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    for (j = 0; j < num; j++) 
    {
        for (i = num; i > j; i--) 
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
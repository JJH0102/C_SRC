#include <stdio.h>

int main()
{
    int i, j;

    for (j = 1; j < 10; j++) {
        for (i = 2; i < 4; i++) {
            printf("%d * %d = %d\t", i, j, j * i);
        }

        printf("\n");
    }
}
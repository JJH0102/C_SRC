#include <stdio.h>

int main(void)
{
	int ary[100];
    int i;

    for (i = 0; i < 100; i++) {
        ary[i] = i + 1;

        printf("%d ", ary[i]);
    }

	return 0;
}
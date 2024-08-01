#include <stdio.h>

void pirnt_ary(int *pa, int cnt);

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    printf_ary(ary, sizeof(ary) / sizeof(ary[0]));

	return 0;
}

void pirnt_ary(int *pa, int cnt)
{
    int i;

    for (i = 0; i < cnt; i++) {
        printf("%d ", *(pa + i));
        // = printf("%d ", pa[i]);
    }
}
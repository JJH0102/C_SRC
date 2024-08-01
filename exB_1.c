#include <stdio.h>

int main(void)
{
	int a[5] = { 3, 2, 1, 6, 5 };
    int i, j, temp;
    int size;

    size = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < size; i++) {
        printf("%5d", a[i]);
    }

	return 0;
}

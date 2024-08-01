#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{   
    int **ps = (int **)malloc(4 * sizeof(int *));
    int i;

    for (i = 0; i < 4; i++) {
        ps[i] = (int *)malloc(5 * sizeof(int));
    }

	return 0;
}
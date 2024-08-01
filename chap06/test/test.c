#include <stdio.h>

int main()
{
    int i, j;
    int num = 1;

    for (i = 0; i < 5; i++) { 
        for (j = 1; j < 6; j++) {
            printf("%2d ", num);
            num++;
        }

        printf("\n");
      
    }

    return 0;
}
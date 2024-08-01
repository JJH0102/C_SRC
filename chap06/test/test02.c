#include <stdio.h>

int main()
{
    int i;
    int result = 0;

    for (i = 1; i < 101; i++) {
        if ( (i % 3) != 0 && (i % 7) != 0) { 
            continue; 
        }

        result += i;
    }

    printf("%d\n", result);

    return 0;
}
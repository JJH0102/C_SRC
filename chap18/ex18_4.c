#include <stdio.h>

int main(void)
{
    int ch;

    while (1) {
        ch = getchar(); // = 'ch = fgetc(stdin);' 

        if (ch == EOF) {
            printf("EOF 입력\n");
            break;
        }  

        putchar(ch);    // = 'fputc(ch, stdout);'
    }

	return 0;
}
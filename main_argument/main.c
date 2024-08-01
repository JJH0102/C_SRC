#include <stdio.h>
#include <stdlib.h>

// add
int main(int argc, char *argv[]) // argc : 개수, argv : 문자열들에 대한 배열
{
    if (argc != 3) {
        printf("using : ./main 10 20\n");
        return 0;
    }

    printf("%s + %s = %d\n", argv[1], argv[2], atoi(argv[1]) + atoi(argv[2]));
    // 문자+문자를 할 수 없으므로 atoi() 함수를 이용하여 문자를 숫자로 변환

    // for (int i = 0; i < argc; i++) {
    //     printf("argv[%d] :%s\n",i, argv[i]);
    // } 
}
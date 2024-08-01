#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *ifp, *ofp;
    char str[80];
    char *res;

	ifp = fopen("a.txt", "r");

    if (fp == NULL) {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    ofp =fopen("b.txt", "w");

    if (ofp == NULL) {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    while (1) {
        res = fgets(str, sizeof(str), ifp); 
        if (res == NULL) {
            break;
        }
        
        str[strlen(str) - 1] = '\0';
        fputs(str, ofp);
        fputs(" ", ofp); 
    }

    fclose(ifp);
    fclose(ofp);

	return 0;
}
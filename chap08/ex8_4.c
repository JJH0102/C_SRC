#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "cat";
    char str2[80] = "";
    
    /*
    int i;

    for (i = 0; i < 80; i++) {
        str2[i] = str1[i];
    }

    printf("str1 : %s, str2 : %s\n", str1, str2);
    */

   strcpy(str1, "tiger");

	return 0;
}
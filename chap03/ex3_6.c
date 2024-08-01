#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[10] = "strawberry";
	strcpy(fruit, "banana");
	
	printf("딸기 : %s\n", fruit);
	printf("딸기잼 : %s %s\n", fruit, "jam");
	
	return 0;
}

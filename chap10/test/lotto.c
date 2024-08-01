#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void)
{
	int lotto_nums[6] = {};

    input_nums(lotto_nums);
    print_nums(lotto_nums);

	return 0;
}

void input_nums(int *lotto_nums)
{
    int i;

    for (i = 0; i < 6; i++) {
        printf("\n번호(1 ~ 45) 입력 : ");
        scanf("%d", &lotto_nums[i]);
    }
}

void print_nums(int *lotto_nums)
{   
    int i;
    
    printf("로또 번호 : ");

    for (i = 0; i < 6; i++) {
        printf("%d ", lotto_nums[i]);
    }

    printf("\n");
    
}
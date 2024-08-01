#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct book print_book(struct book b1);

struct book
{
    char title[20];
    char name[20];
    int page;
    int price;
};

int main(void)
{
	struct book b1;
    int temp;

    printf("도서명 입력 : ");
    gets(temp);

    b1.title = (char*)malloc(strlen(temp) + 1);
    strcpy(b1.title, temp);
    strcpy(b1.name, "서현우");
    b1.page = 663;
    b1.price = 26000;

    // 멤버 변수들 값 출력 함수
    print_book(b1);

	return 0;
}

struct book print_book(struct book b1)
{
    printf("도서명 : %s\n", b1.title);
    printf("저자 : %s\n", b1.name);
    printf("페이지수 : %d\n", b1.page);
    printf("가격 : %d\n", b1.price);
}
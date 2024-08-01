#include <stdio.h>
#include <string.h>

struct student
{
    int number;
    char name[20];
    char grade[10];
    int kor;
    int eng;
    int math;
    int total;
    double avg;
};

struct student input_info(struct student *s1);
struct student print_student(struct student *s1);
struct student sort_avg(struct student *s1);

int main(void)
{
    struct student temp;
	struct student s1[5];
    int i, j, size;

    input_info(s1);

    printf("# 정렬 전 데이터...\n");

    print_student(s1);

    printf("\n# 정렬 후 데이터...\n");

    sort_avg(s1);
    /*
    size = sizeof(s1) / sizeof(s1[0]);
    
    for (i = size - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (s1[j].avg < s1[j + 1].avg)
            {
                temp = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = temp;
            }
        }
    }
    */
    for (i = 0; i < size; i++)
    {
        printf("%d %s %d %d %d %d %.1lf %s\n", s1[i].number, s1[i].name, s1[i].kor, s1[i].eng, s1[i].math, s1[i].total, s1[i].avg, s1[i].grade);
    }

	return 0;
}

struct student input_info(struct student *s1)
{
    int i;

    for (i = 0; i < 5; i++) {
        printf("학번 : ");
        scanf("%d", &(s1[i].number));

        printf("이름 : ");
        scanf("%s", &(s1[i].name));

        printf("국어, 영어, 수학 점수 : ");
        scanf("%d %d %d", &(s1[i].kor), &(s1[i].eng), &(s1[i].math));

        printf("\n");
    }
}

struct student print_student(struct student* s1)
{
    int i;

    for (i = 0; i < 5; i++) {
        s1[i].total = s1[i].kor + s1[i].eng + s1[i].math;
        s1[i].avg = s1[i].total / 3.0;

        if (s1[i].avg >= 90) {
            strcpy(s1[i].grade, "A");
        }

        else if (s1[i].avg >= 80) {
            strcpy(s1[i].grade, "B");
        }

        else if (s1[i].avg >= 70) {
            strcpy(s1[i].grade, "C");
        }

        else {
            strcpy(s1[i].grade, "F");
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d %s %d %d %d %d %.1lf %s\n", s1[i].number, s1[i].name, s1[i].kor, s1[i].eng, s1[i].math, s1[i].total, s1[i].avg, s1[i].grade);
    }
}

struct student sort_avg(struct student *s1)
{
    struct student temp;
    int i, j;

    for (i = 0; i < (5-1); i++) {
        for (j = i + 1; j < 5; j++) {
            if (s1[i].avg < s1[j].avg)
            {
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }
}
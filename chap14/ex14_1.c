#include <stdio.h>

int main(void)
{
	int score[3][4] = {{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}};
    int total;
    double avg;
    int i, j;

    // 행의 수
    printf("행의 수 : %d\n", sizeof(score) / sizeof(score[0]));

    //열의 수
    printf("열의 수 : %d\n", sizeof(score[0]) / sizeof(score[0][0]));

    /*
    for (i = 0; i < 3; i++) {
        printf("4과목의 점수 입력 : ");

        for (j = 0; j < 4; j++) {
            scanf ("%d", &score[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        total = 0;

        for (j = 0; j < 4; j++) {
            total += score[i][j];
        }

        avg = total / 4.0;
        printf("총점 : %d, 평균 : %.2lf\n", total, avg);
    }
    */

    // 국어 점수 총점

    int kor_tot = 0;
    double kor_avg = 0.0;

    for (i = 0; i < 3; i++) {
        kor_tot += score[i][0];
    }

    kor_avg = kor_tot / 3.0;

    printf("국어 총점 : %.2lf\n", kor_avg);

	return 0;
}
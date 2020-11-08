#include <stdio.h>

#define STUDENT_CNT 3

struct Student {
	char name[32];
	int num, kor, eng, math;
	int total;
	double average;
};

int main()
{
	struct Student students[STUDENT_CNT];

	for (int i = 0; i < STUDENT_CNT; i++) {
		printf("이름: ");
		scanf_s("%s", students[i].name, 32);
		printf("학번: ");
		scanf_s("%d", &students[i].num);

		printf("성적(국어,영어,수학):");
		scanf_s("%d %d %d", &students[i].kor, &students[i].eng, &students[i].math);
	}

	for (int i = 0; i < STUDENT_CNT; i++) {
		students[i].total = students[i].kor + students[i].eng + students[i].math;

		students[i].average = students[i].total / 3.0;

		printf("\n%s 학생의 대한 정보입니다\n", students[i].name);
		printf("학번: %04d\n", students[i].num);
		printf("국어: %04d\n", students[i].kor);
		printf("영어: %04d\n", students[i].eng);
		printf("수학: %04d\n", students[i].math);

		printf("총점: %d,평균: %.1f \n", students[i].total, students[i].average);
	}

	return 0;
}
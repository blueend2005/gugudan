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
		printf("�̸�: ");
		scanf_s("%s", students[i].name, 32);
		printf("�й�: ");
		scanf_s("%d", &students[i].num);

		printf("����(����,����,����):");
		scanf_s("%d %d %d", &students[i].kor, &students[i].eng, &students[i].math);
	}

	for (int i = 0; i < STUDENT_CNT; i++) {
		students[i].total = students[i].kor + students[i].eng + students[i].math;

		students[i].average = students[i].total / 3.0;

		printf("\n%s �л��� ���� �����Դϴ�\n", students[i].name);
		printf("�й�: %04d\n", students[i].num);
		printf("����: %04d\n", students[i].kor);
		printf("����: %04d\n", students[i].eng);
		printf("����: %04d\n", students[i].math);

		printf("����: %d,���: %.1f \n", students[i].total, students[i].average);
	}

	return 0;
}
#include <stdio.h>
#define MAX_count  5
int main()
{
	int num[MAX_count], i, step, temp;

	printf("���� %d���� �Է��Ͻÿ� : ", MAX_count);

	for (i = 0; i < MAX_count; i++) scanf_s("%d", num + i);

	for (step = 0; step < MAX_count - 1; step++) {
		for (i = 0; i < MAX_count - 1 - step; i++) {

			if (num[i] < num[i + 1]) {
				temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
		}
	}

	printf("\n���ĵ� ����� ������ �����ϴ�!\n");
	for (i = 0; i < MAX_count; i++)printf("%d ", num[i]);
	printf("\n");
	return 0;
}
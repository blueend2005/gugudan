#include <stdio.h>
#define MAX_LENGTH  128
int main()
{
	int Line_count = 0;

	char buffer[MAX_LENGTH];

	FILE* p_file = NULL;

	if (0 == fopen_s(&p_file, "date.TXT", "rt")) {
		printf("date.txt ������ ������ ������ �����ϴ�.\n\n");

		while (fgets(buffer, MAX_LENGTH, p_file) != NULL) {

			Line_count++;

			printf("[%d]��° �� : %s", Line_count, buffer);
		}

		fclose(p_file);

		printf("\n\n");
	}

	return 0;
}
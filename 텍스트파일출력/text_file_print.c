#include <stdio.h>
#define MAX_LENGTH  128
int main()
{
	int Line_count = 0;

	char buffer[MAX_LENGTH];

	FILE* p_file = NULL;

	if (0 == fopen_s(&p_file, "date.TXT", "rt")) {
		printf("date.txt 파일의 내용은 다음과 같습니다.\n\n");

		while (fgets(buffer, MAX_LENGTH, p_file) != NULL) {

			Line_count++;

			printf("[%d]번째 줄 : %s", Line_count, buffer);
		}

		fclose(p_file);

		printf("\n\n");
	}

	return 0;
}
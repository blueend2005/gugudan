#include <stdio.h>

void ShowDon(int a_step)
{
	int i;
	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", a_step, i, a_step* i);
	}
}

int main()
{
	int step;

	for (step = 2; step < 10; step++) {
		ShowDon(step);
	}

	return 0;
}
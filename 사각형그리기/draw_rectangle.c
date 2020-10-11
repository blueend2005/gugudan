
#include <stdio.h>

void printfmiddlelind(const char* ap_string, int a_space_count) {
	printf("¤Ó%-*s¤Ó\n", a_space_count, ap_string);
}

int main(){
	int i;

	printf("¦£");
	for (i = 0; i < 30; i++) printf("-");
	printf("¦¤\n");

	printfmiddlelind("", 29);
	printfmiddlelind(" tipsware", 29);
	printfmiddlelind("", 29);

	printf("¦¦");
	for (i = 0; i < 30; i++) printf("-");
	printf("¦¥\n");


	return 0;
}
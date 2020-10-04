#include <stdio.h>

int main()
{
	char op_type;

	int num1, num2;


	printf("첫 번째 정숫값을 입력 : ");

		scanf_s("%d", &num1);

rewind(stdin);

printf("연산자 입력 (+,-,*, / 가능):");

scanf_s("%c", &op_type, 1);

printf("두 번째 정숫값을 입력 : ");

scanf_s("%d", &num2);

switch (op_type)
{
case '+':
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	break;
case '-':
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	break;
case '*':
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	break;
case '/':
	if (num2 == 0) printf("오류가 발생했습니다! 0으로 나눌 수 없습니다!\n");
	else printf("%d / %d = %.3f\n", num1, num2, num1 / (double)num2);
	break;
}

return 0;
}
#include <stdio.h>

int main()
{
	char op_type;

	int num1, num2;


	printf("ù ��° �������� �Է� : ");

		scanf_s("%d", &num1);

rewind(stdin);

printf("������ �Է� (+,-,*, / ����):");

scanf_s("%c", &op_type, 1);

printf("�� ��° �������� �Է� : ");

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
	if (num2 == 0) printf("������ �߻��߽��ϴ�! 0���� ���� �� �����ϴ�!\n");
	else printf("%d / %d = %.3f\n", num1, num2, num1 / (double)num2);
	break;
}

return 0;
}
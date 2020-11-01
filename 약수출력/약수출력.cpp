#include <stdio.h>
int main()
{
    int num, i;

    printf("input number : ");

    scanf_s("%d", &num);

    printf("1");

    for (i = 2; i <= num; i++) {

        if (num % i == 0) printf(",%d", i);
    }


return 0;
}
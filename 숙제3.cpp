#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char str[40];
    int len = 0;

    printf("���ڿ� �Է� : ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    printf("���ڿ� ���� : %d\n", len);

    return 0;
}
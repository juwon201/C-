#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char str[40];
    int len = 0;

    printf("문자열 입력 : ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    printf("문자열 길이 : %d\n", len);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int strlen(char* str)
{
    int length = 0;
    while (str[length] != '\0')
        length++;
    return length;
}
int main()
{
    char str[40];
   
    printf("���ڿ� �Է� : ");
    scanf("%s", str);
    
    int len = strlen(str);
    while (str[len] != '\0')
        len++;

    printf("���ڿ� ���� : %d\n", len);

    return 0;
}
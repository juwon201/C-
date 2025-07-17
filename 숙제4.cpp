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
   
    printf("문자열 입력 : ");
    scanf("%s", str);
    
    int len = strlen(str);

    printf("문자열 길이 : %d\n", len);

    return 0;
}


/*int strlen(char* str)
{
	char* p = str;
	while (*p != '\0')
		p++;
	return p-str;
}*/


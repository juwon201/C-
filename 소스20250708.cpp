//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void main()
//{
//	char buff[40];
//	char ch = 0;
//	char* pch;
//
//	printf("문자열 입력 : ");
//	gets_s(buff);
//	printf("\n");
//
//	while (1)
//	{
//		printf("검색할 문자 입력 : ");
//		scanf(" %c", &ch);
//
//		if (ch == '0')
//		{
//			printf("프로그램 종료 \n");
//			break;
//		}
//
//		pch = strchr(buff, ch);
//		
//		while (pch != NULL)
//		{
//			printf("%d번째에 있다.\n", pch - buff + 1);
//			pch = strchr(pch + 1, ch);
//		}
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int parsing(char* string, int* data)
//{
//	char* p;
//	int cnt;
//	cnt = 0;
//	p = strtok(string, "_");
//	while (p)
//	{
//		data[cnt++] = atoi(p);
//		p = strtok(NULL, "_");
//	}
//	return cnt;
//}
//
//int main()
//{
//	char String[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(String, data);
//
//	for (i = 0; i < cnt; i++)
//		printf("%d\n", data[i]);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int integer = 123;
//	char character = 'c';
//	char string[] = "hello, world";
//	int* pointer = &integer;
//	double pi = 3.141592;
//	char buf[100];
//
//	sprintf(buf, "integer : (decimal) %d (octal) %o \n", integer, integer);
//	printf("%s\n", buf);
//	
//	sprintf(buf, "character : %c\n", character);
//	printf("%s\n", buf);
//
//	sprintf(buf, "string : %c\n", string);
//	printf("%s\n", buf);
//
//	sprintf(buf,"pointer addr : %p\n", pointer);
//	printf("%s\n", buf);
//
//	sprintf(buf, "floating point : %e //%f\n", pi, pi);
//	printf("%s\n", buf);
//
//	sprintf(buf, "percent symbol : %%\n");
//	printf("%s\n", buf);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char parsing(char* string, int* data)
{
	char* p;
	char oper;
	oper = 0;
	
	p = strtok(string, " ");
	data[0] = atoi(p);
	p = strtok(NULL, " ");
	oper = *p;
	p = strtok(NULL, " ");
	data[1] = atoi(p);
	p = strtok(NULL, " ");
	
	p = strtok(NULL, " ");
	data[2] = atoi(p);
	
	return oper;
}

int main()
{
	char String[] = "3 / 2 = 2";
	int data[3];
	int result;
	char oper = parsing(String, data);

	switch (oper)
	{
	case '+':
	{
		result = data[0] + data[1];
		
		if (data[0] + data[1] == data[2])
			printf("참입니다.\n");

		else
			printf("%d %c %d = %d입니다 .\n", data[0], oper, data[1], result); break;
		
	}
	
	case '-':
	{
		result = data[0] - data[1];
		
		if (data[0] - data[1] == data[2])
			printf("참입니다.\n");

		else
			printf("%d %c %d = %d입니다 .\n", data[0], oper, data[1], result); break;
	}

	case '*':
	{
		result = data[0] * data[1];
		
		if (data[0] * data[1] == data[2])
			printf("참입니다.\n");

		else
			printf("%d %c %d = %d입니다 .\n", data[0], oper, data[1], result); break;
	}
	
	case '/':
	{
		result = data[0] / (float)data[1];
		
		if (data[0] / data[1] == data[2])
			printf("참입니다.\n");

		else
			printf("%d %c %d = %d입니다 .\n", data[0], oper, data[1], (float)result); break;
	}

	case '%':
	{
		result = data[0] % data[1];
		
		if (data[0] / data[1] == data[2])
			printf("참입니다.\n");

		else
			printf("%d %c %d = %d입니다 .\n", data[0], oper, data[1], result); break;
	}
	
	default :
		printf("잘못 입력하였습니다.\n"); break;
	}
	return 0;
}
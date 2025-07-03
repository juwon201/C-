//#include <stdio.h>
//void main()
//{
//	int arr[100];
//	int* p;
//
//	for (int i = 0; i < 100; i++)
//		arr[i] = i + 1;
//
//	p = &arr[50];
//
//	for (;*p != 50;p++)
//	{
//		printf("%d ", *p);
//		
//		if (*p == 100)
//			p -= 100;
//	}
//	printf("\n");
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct mydata
//{
//	int a;
//	char b[25];
//};
//void main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'k';
//	printf("%d - %s\n", data.a, data.b);
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char* str1 = (char*)"coding";
//	char* str2 = (char*)"coding";
//	char* str3 = (char*)"coding.ne.kr";
//	char* str4 = (char*)"ne.kr";
//	char* str5 = (char*)"abcd";
//
//	printf("%s with %s = %d\n", str1, str2, memcmp(str1, str2, strlen(str1)));
//	printf("%s with %s (str1 size) = %d\n", str1, str3, memcmp(str1, str3, strlen(str1)));
//	printf("%s with %s (str2 size) = %d\n", str1, str3, memcmp(str1, str3, strlen(str3)));
//	printf("%s with %s = %d\n", str1, str4, memcmp(str1, str4, strlen(str1)));
//	printf("%s with %s (str1 size) = %d\n", str1, str5, memcmp(str1, str5, strlen(str1)));
//	printf("%s with %s (str5 size) = %d\n", str1, str5, memcmp(str1, str5, strlen(str5)));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int src_data[10] = { 0,1,2,3,4,5 };
//	int dst_data[10] = { 10,20,30,40,50 };
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//
//	for (int i = 0; i < 5; i++)
//		printf("%d ", src_data[i]);
//	printf("\n");
//
//	for (int i = 0; i < 5; i++)
//		printf("%d ", dst_data[i]);
//	printf("\n");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[20] = "coding";
//
//	strcat(str, ".ne.kr");
//	puts(str);
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[10];
//
//	gets_s(str);
//	printf("입력한 문자열 : %s\n", str);
//	printf("문자열의 길이 : %d\n", strlen(str));
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "This is a sample string";
//	char* pch;
//	printf("Looking for the 's' character in \"%s\"...\n", str);
//	pch = strchr(str, 's');
//
//	while (pch != NULL)
//	{
//		printf("found at %d\n", pch - str + 1);
//		pch = strchr(pch + 1, 's');
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//
//	printf("%s\n", str);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	const char* str1 = "LPUX";
//	const char* str2 = "HINUX";
//	const char* str3 = "SOLARIS";
//
//	printf("s1[%-7s], s2[%-7s] => ret = [%2d]\n", str1, str2, strcmp(str1, str2));
//	printf("s2[%-7s], s3[%-7s] => ret = [%2d]\n", str2, str3, strcmp(str2, str3));
//	printf("s3[%-7s], s1[%-7s] => ret = [%2d]\n", str3, str1, strcmp(str3, str1));
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>	
//int main()
//{
//	char buf[25];
//
//	strcpy(buf, "hello world");
//	puts(buf);
//	strncpy(buf, "www world", 5);
//	puts(buf);
//
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main()
{
	char buff[100];
	char ch;
	char* pch;

	printf("문자열 입력 : ");
	gets_s(buff);

	while(1)
	{
		printf("검색할 문자 입력 : ");
		scanf("%c", &ch);
		
		if (ch == '0')
		{
			printf("프로그램 종료\n");
			break;
		}
		
		pch = strchr(buff, ch);
		
		while (pch != NULL)
		{
			printf("%d번째에 문자 있음\n", pch - buff + 1);
			pch = strchr(pch + 1, ch);
		}
	}
}
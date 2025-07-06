#include <stdio.h>	
#include <string.h>
void main()
{
	char s[40] = "ITCookBookHanbitNetwork";
	char* p;
	char tmp = 0;
	int i, k;
	p = s;

	printf("정렬 전 문자열 : ");

	for (i = 0;i < strlen(s);i++)
		printf("%c", *(p+i));
	
	printf("\n");
	
	for (i = 0;i < strlen(s)-1;i++)
	{
		for (k = i+1;k < strlen(s);k++)
		{
			if (*(p + i) < *(p + k))
			{
				tmp = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = tmp;
			}
		}
	}

	printf("정렬 후 문자열 : ");

	for (i = 0;i < strlen(s);i++)
		printf("%c", *(p+i));
	
	printf("\n");
}

//#include <stdio.h>
//void main()
//{
//	char ss[5] = "abcd";
//	char tt[5];
//	int i;
//
//	for (i = 0;i < 4;i++)
//		tt[i] = ss[3 - i];
//	tt[4] = '\0';
//
//	printf("거꾸로 출력한 결과 : %s\n", tt);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void main()
//{
//	char ss[] = "XYZ";
//	int len;
//
//	len = strlen(ss);
//	printf("문자열 \"%s\"의 길이 : %d\n", ss, len);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//void main()
//{
//	char ss[4];
//	strcpy(ss, "XYZ");
//	printf("문자열 ss의 내용 : %s\n", ss);
//}
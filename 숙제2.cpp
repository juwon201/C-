#include <stdio.h>	
#include <string.h>
void main()
{
	char s[40] = "ITCookBookHanbitNetwork";
	char* p;
	char tmp = 0;
	int i, k;
	p = s;

	printf("���� �� ���ڿ� : ");

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

	printf("���� �� ���ڿ� : ");

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
//	printf("�Ųٷ� ����� ��� : %s\n", tt);
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
//	printf("���ڿ� \"%s\"�� ���� : %d\n", ss, len);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//void main()
//{
//	char ss[4];
//	strcpy(ss, "XYZ");
//	printf("���ڿ� ss�� ���� : %s\n", ss);
//}
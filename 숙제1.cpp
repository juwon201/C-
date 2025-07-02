//#include <stdio.h>
//void main()
//{
//	char ch;
//	char* p;
//
//	ch = 'A';
//	p = &ch;
//
//	printf("ch가 가지고 있는 값 : ch : %c\n", ch);
//	printf("ch의 주소 : &ch : %d\n", &ch);
//	printf("p가 가지고 있는 값 : p : %d\n", p);
//	printf("p가 가리키는 곳의 실제 값 : *p : %c\n", *p);
//}

//#include <stdio.h>
//void main()
//{
//	char ch;
//	char* p;
//	char* q;
//	ch = 'A';
//	p = &ch;
//	q = p;
//	*q = 'Z';
//
//	printf("ch가 가지고 있는 값 : ch = %c\n\n", ch);
//}

//#include <stdio.h>
//void main()
//{
//	char s[8] = "Basic-C";
//	char* p;
//	p = s;
//	printf("&s[3] = %s\n", &s[3]);
//	printf("p+3 = %s\n\n", p + 3);
//	printf("s[3] = %c\n", s[3]);
//	printf("*(p+3) = %c\n", *(p + 3));
//}

//#include <stdio.h>
//void main()
//{
//	char s[8] = "Basic-C";
//	char* p;
//	int i;
//
//	p = s;
//
//	for (i = sizeof(s) - 2;i >= 0;i--)
//		printf("%c", *(p + i));
//	printf("\n");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//void main()
//{
//	char ss[100];
//	int count, i;
//	char* p;
//
//	printf("문자열을 입력하시오 :  ");
//	scanf("%s", ss);
//
//	count = strlen(ss);
//	p = ss;
//
//	printf("내용을 거꾸로 출력 : ");
//	for (i = 0;i < count;i++)
//		printf("%c", *(p + count - i-1));
//	printf("\n");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b, tmp;
//	int* p1, * p2;
//
//	printf("a 값 입력 : ");
//	scanf("%d", &a);
//	printf("b 값 입력 : ");
//	scanf("%d", &b);
//
//	p1 = &a;
//	p2 = &b;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//
//	printf("바뀐 값 a는 %d, b는 %d\n", a, b);
//}

#include <stdio.h>
void main()
{
	int s[10] = { 1,0,3,2,5,4,7,6,9,8 };
	int tmp;
	int i, k;
	int* p;
	p = s;

	printf("정렬 전 배열 : s = ");

	for (i = 0;i < 10;i++)
		printf("%d ", *(p + i));
	printf("\n");

	for (i = 0;i < 9;i++)
	{
		for (k = i + 1;k < 10;k++)
		{
			if (*(p + i) > *(p + k))
			{
				tmp = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = tmp;
			}
		}
	}
	
	printf("정렬 후 배열 : s = ");
	for (i = 0;i < 10;i++)
		printf("%d ", *(p + i));
	printf("\n");
}
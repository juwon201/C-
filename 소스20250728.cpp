//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//struct DATA {
//	int N;
//	int* pNum;
//};
//void func_sort(DATA* d);
//void func_swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	DATA data;
//	printf("정수 입력 : ");
//	scanf("%d", &data.N);
//
//	data.pNum = (int*)malloc(sizeof(int) * data.N);
//	srand((unsigned int)time(NULL));
//
//	printf("<랜덤으로 입력받은 수 출력>\n");
//	for (int i = 0; i < data.N; i++)
//	{
//		*(data.pNum + i) = (rand() % data.N) + 1;
//		printf("%2d", data.pNum[i]);
//	}
//
//	func_sort(&data);
//
//	printf("\n<오름차순으로 정렬된 수 출력>\n");
//	for (int i = 0; i < data.N; i++)
//	{
//		printf("%2d", data.pNum[i]);
//		if (i % 10 == 9)
//			printf("\n");
//	}
//	free(data.pNum);
//}
//void func_sort(DATA* d)
//{
//	for (int i = 0; i < (*d).N; ++i)
//	{
//		for (int j = i; j < d->N; ++j)
//		{
//			if (d->pNum[i] > d->pNum[j])
//				func_swap(d->pNum[i], d->pNum[j]);
//		}
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("안녕하세요");
//	fclose(pFile);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "안녕하세요");
//	fclose(pFile);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	char name[100];
//
//	pFile = fopen("myfile.txt", "w");
//	fscanf(pFile, "%s", name);
//	printf("%s", name);
//	fclose(pFile);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	char name[100];
//	pFile = fopen("myfile.txt", "w");
//	for (int n = 0; n < 5; ++n)
//	{
//		printf("파일에 쓰고 싶은 말을 입력하시오 : ");
//		scanf("%s", name);
//		fprintf(pFile, "%d번째 내용)% - 10s]\n", n, name);
//	}
//	fclose(pFile);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	FILE* rfp, * wfp;
//	char buff[1024];
//	rfp = fopen("myfile.txt", "r");
//	wfp = fopen("outfile.txt", "w");
//	if (rfp == NULL)
//	{
//		printf("파일을 찾지 못하였습니다.\n");
//		return;
//	}
//
//	while (!feof(rfp))
//	{
//		fgets(buff, 1024, rfp);
//		fputs(buff, wfp);
//	}
//	fclose(rfp);
//	fclose(wfp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//#define BUFF_SIZE 30
//int main()
//{
//	char buff[BUFF_SIZE];
//	int readLen = 0;
//	FILE* src, * dst;
//	char name1[100], name2[100], enter;
//
//	printf("입력받을 파일의 이름을 입력하세요 : ");
//	scanf("%s%c", name1, &enter);
//
//	printf("출력받을 파일의 이름을 입력하세요 : ");
//	gets_s(name2);
//
//	src = fopen(name1, "rb");
//	dst = fopen(name2, "wb");
//
//	if (src == NULL || dst == NULL)
//	{
//		puts("파일을 못 찾음");
//		return -1;
//	}
//
//	while (true)
//	{
//		readLen = fread(buff, 1, BUFF_SIZE, src);
//		if (readLen < BUFF_SIZE)
//		{
//			if (feof(src) != 0)
//			{
//				fwrite(buff, 1, readLen, dst);
//				puts("파일 복사 완료");
//				break;
//			}
//			else
//			{
//				printf("파일 복사 실패");
//				return -1;
//			}
//		}
//		fwrite(buff, 1, BUFF_SIZE, dst);
//	}
//	if (fclose(src) != 0 || fclose(dst) != 0)
//	{
//		puts("파일을 닫지 못했습니다.");
//		return -1;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	FILE* fp = fopen("Coding.txt", "w");
//	int i = 123;
//	int j = -123;
//	double f = 3.141592;
//
//	fprintf(fp, "폭맞추기\n");
//	fprintf(fp, "i: %6d \n", i);
//	fprintf(fp, "i: %7d \n", i);
//	fprintf(fp, "i: %2d \n\n", i);
//
//	fprintf(fp, "오른쪽정력\n");
//	fprintf(fp, "i: %5d \n", i);
//	fprintf(fp, "왼쪽정력\n");
//	fprintf(fp, "i: %-5d끝\n\n", i);
//
//	fprintf(fp, "#문자의 사용\n");
//	fprintf(fp, "i: %#x \n", i);
//	fprintf(fp, "j: %#x\n\n", j);
//
//	fprintf(fp, "부호붙이기\n");
//	fprintf(fp, "i: %+d, j: %+d \n", i, j);
//
//	fclose(fp);
//	return 0;
//}

////문제 1,2,3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	FILE* wfp1 = fopen("myfile.txt", "w");
//	FILE* wfp2 = fopen("outfile.txt", "w");
//	char str[100];
//
//	printf("outfile 파일에 입력할 문자열을 입력하시오 : ");
//	scanf("%s", str);
//	
//	fprintf(wfp1, "Helloworld");
//	fprintf(wfp2, str);
//	fclose(wfp1);
//	fclose(wfp2);
//}

//문제 4,5
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
void main()
{
	FILE* wfp1 = fopen("myfile.txt", "w");
	FILE* wfp2 = fopen("outfile.txt", "w");
		
	fprintf(wfp1, "안녕하세요");
	fprintf(wfp2, "안녕히가세요");
	
	fclose(wfp1);
	fclose(wfp2);
	
	char str1[1025];
	char str2[1025];

	FILE* rfp1 = fopen("myfile.txt", "r");
	FILE* rfp2 = fopen("outfile.txt", "r");

	fgets(str1, 1025, rfp1);
	fgets(str2, 1025, rfp2);
	
	printf("%s\n", str1);
	printf("%s\n", str2);

	fclose(rfp1);
	fclose(rfp2);
}

//문제 5
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void main()
//{
//	FILE* wfp1 = fopen("myfile.txt", "w");
//	FILE* wfp2 = fopen("outfile.txt", "w");
//	char str1[100];
//	char str2[100];
//
//	printf("myfile 파일에 입력할 문자열을 입력하시오 : ");
//	scanf("%s", str1);
//
//	printf("outfile 파일에 입력할 문자열을 입력하시오 : ");
//	scanf("%s", str2);
//
//
//	int count = 0;
//	int i = 0;
//	while (str1[i] != NULL && str2[i] != NULL)
//	{
//		if (str1[i] == str2[i])
//			count++;
//		i++;
//	}
//	fprintf(wfp1, str1);
//	fprintf(wfp2, str2);
//	printf("같은 위치에 같은 문자 개수 : %d개", count);
//	
//
//	fclose(wfp1);
//	fclose(wfp2);
//}




//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int nRow = 5, nCol = 4;
//	int** aNum = new int*[nRow];
//
//	for (int i = 0; i < nRow; i++)
//	{
//		aNum[i] = new int[nCol];
//		
//		for (int j = 0; j < nCol; ++j)
//		{
//			aNum[i][j] = i * 10 + j;
//		}
//	}
//
//	for (int i = 0; i < nRow; ++i)
//	{
//		for (int j = 0; j < nCol; ++j)
//		{
//			printf("%02d ", aNum[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < nRow; ++i)
//		delete aNum[i];
//	delete aNum;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* arr;
//	arr = (int*)malloc(sizeof(int*) * 10);
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 10 + 1;
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//}
//
//#define _CRT_SECURE_NO_WARNINGS//scanf함수 쓰기위함
//#include <stdio.h>//printf, scanf함수 쓰기위함
//#include <stdlib.h>//rand함수 및 malloc함수 쓰기위함//srand함수 free함수 쓰기 위함
//#include <time.h>//time 함수 쓰기위함
//void func_sort(int* pNum, int N);//뒤에 있는 함수 선언
//void func_swap(int& a, int& b);//뒤에 있는 함수 선언
//int main()//main 함수 선언
//{
//	int N; //변수 선언
//	int* pNum;//포인터변수 선언
//	printf("정수 입력 : ");//"정수 입력" 글귀 출력
//	scanf("%d", &N);//숫자를 입력받고 그 값을 N에 대입
//
//	pNum = (int*)malloc(sizeof(int) * N);//pNum에 동적활당하여 크기 잡기
//
//	srand((unsigned int)time(NULL));//계속 변화하는 시간을 기준으로 변수를 생성(무작위 변수)
//
//	printf("<랜덤으로 입력받은 수 출력>\n");//글귀 출력
//	for (int i = 0; i < N; i++)//N번 반복
//	{
//		*(pNum + i) = (rand() % N) + 1;//변수의 나머지에 1을 더한값(1~N)까지의 값을 pNum배열에 차례대로 대입
//		printf("%2d", pNum[i]);//pNum 배열 출력
//	}
//	
//	func_sort(pNum, N);//정렬 함수 실행
//
//	printf("\n<오름차순으로 정렬된 수 출력>\n");//글귀 출력
//	for (int i = 0; i < N; i++)//N번 반복
//	{
//		printf("%2d", pNum[i]);//정렬된 pNum 배열 출력
//		if (i % 10 == 9)//나머지가 9이면
//			printf("\n");//줄 건너뛰기
//	}
//	free(pNum);//메모리 해제
//}
//void func_sort(int* pNum, int N)//정렬 함수 선언 (선택정렬 1번)
//{
//	for (int i = 0; i < N; ++i)//N번 반복 
//	{
//		for (int j = i; j < N; ++j)//i부터 N까지 반복
//		{
//			if (pNum[i] > pNum[j])//앞 숫자가 뒷숫자보다 크면
//				func_swap(pNum[i], pNum[j]);//변환 함수 실행
//		}
//	}
//}
//void func_swap(int& a, int& b)//변환 함수 선언//변환 함수 외에 있는 변수값에 직접 개입하기위해 reference 사용
//{
//	int temp = a;//temp에 a값 대입
//	a = b;//a에 b값 대입
//	b = temp;//b에 temp값 (기존 a값) 대입
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct DATA {
	int N;
	int* pNum;
};
void func_sort(DATA* pNum, DATA N);
void func_swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	DATA data;
	printf("정수 입력 : ");
	scanf("%d", &data.N);

	data.pNum = (int*)malloc(sizeof(int) * data.N);
	srand((unsigned int)time(NULL));

	printf("<랜덤으로 입력받은 수 출력>\n");
	for (int i = 0; i < data.N; i++)
	{
		*(data.pNum + i) = (rand() % data.N) + 1;
		printf("%2d", data.pNum[i]);
	}

	func_sort(data.pNum, data.N);

	printf("\n<오름차순으로 정렬된 수 출력>\n");
	for (int i = 0; i < data.N; i++)
	{
		printf("%2d", data.pNum[i]);
		if (i % 10 == 9)
			printf("\n");
	}
	free(data.pNum);
}
void func_sort(DATA *d)
{
	for (int i = 0; i < (*d).N; ++i)
	{
		for (int j = i; j < d->N; ++j)
		{
			if (d->pNum[i] > d->pNum[j])
				func_swap(d->pNum[i], d->pNum[j]);
		}
	}
}

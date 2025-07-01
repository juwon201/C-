//#include <stdio.h>	
//
//void main()
//{
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numptr = &num1;
//	printf("%d\n", *numptr);
//	numptr = &num2;
//	printf("%d\n", *numptr);
//}
//
//#include <stdio.h>
//
//void main()
//{
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pC의 크기 : %d byte\n", sizeof(pC));
//
//	printf("*pA의 크기 : %d byte\n", sizeof(*pA));
//	printf("*pB의 크기 : %d byte\n", sizeof(*pB));
//	printf("*pC의 크기 : %d byte\n", sizeof(*pC));
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int number[2] = { 1.2 };
//	void* p = number;
//
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}

//#include <stdio.h>	
//
//int main()
//{
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1);
//	printf(">> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d\n", ptrFibo[1]);
//	printf("%d\n", ptrFibo[0]);
//	printf("%d\n", ptrFibo[-1]);
//
//	return 0;
//}
//
//#include <stdio.h>	
//
//int main()
//{
//	int numArr[5] = { 11,22,33,44,55 };
//	int* numptrA;
//	void* ptr;
//
//	numptrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numptrA-1));
//	printf("%d\n", *((int*)ptr+4));
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int arr[5];
//	int* ptr = &arr[0];
//	
//	printf("값 5개 입력 : ");
//	for(int i=0;i<5;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	ptr += 2;
//	printf("%d\n",  *ptr);
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++)
//	{
//
//		printf("%d ", *p++);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[4] = { 1,2,3,4 };
//	int* pt = &num[0];
//
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//	
//	pt--;
//	*pt++ += 20;
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	char str[] = "기울어진 운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";
//	char* ptr = &str[15];
//
//	printf("%s\n\n", ptr);
//}

//#include <stdio.h>
//void main()
//{
//	int i;
//	int arr[100];
//
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	
//	int* p = &arr[99];
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", *p);
//		p--;
//	}
//	printf("\n");
//	/*printf("\n\n");
//	for (i = 100; i > 0; i--)
//	{
//		printf("%d ", i);
//	}
//	printf("\n\n");
//	for (i = 99; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}*/
//}

#include <stdio.h>
void main()
{
	int i;
	int arr[100];
	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}
	
	int* p = &arr[50];

	for (i = 0; i < 100; i++)
	{
		printf("%d ", *p);
	}
	
	printf("\n");
	
}
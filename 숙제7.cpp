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
//	printf("Hello world!\n\n");
//
//	int a, b;
//	
//	printf("두 수 입력 : ");
//	scanf("%d %d", &a, &b);
//
//	printf("두 수의 합 : %d\n\n", a + b);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	printf("두 수 입력 : ");
//	scanf("%d %d", &a, &b);
//
//	printf("두 수의 차 : %d\n\n", a - b);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	printf("두 수 입력 : ");
//	scanf("%d %d", &a, &b);
//
//	printf("두 수의 곱 : %d\n\n", a * b);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	printf("두 수 입력 : ");
//	scanf("%d %d", &a, &b);
//
//	printf("두 수의 나눗셈 몫 : %d\n\n", a / b);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	printf("두 수 입력 : ");
//	scanf("%d %d", &a, &b);
//
//	if (a < b)
//		printf("%d가 더 크다.\n", b);
//	else if (a > b)
//		printf("%d가 더 크다.\n", a);
//	else
//		printf("두 수는 같다.\n");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() 
//{
//    int score;
//    char grade;
//
//    printf("시험 점수를 입력하세요 : ");
//    scanf("%d", &score);
//
//    if (score >= 90)
//        grade = 'A';
//    else if (score >= 80)
//        grade = 'B';
//    else if (score >= 70)
//        grade = 'C';
//    else if (score >= 60)
//        grade = 'D';
//    else
//        grade = 'F';
//
//    printf("당신의 성적은 %c 입니다.\n", grade);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() 
//{
//    int year;
//
//    printf("연도를 입력하세요: ");
//    scanf("%d", &year);
//
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
//        printf("%d년은 윤년입니다.\n", year);
//    else 
//        printf("%d년은 평년입니다.\n", year);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() 
//{
//    float x, y;
//
//    printf("점의 좌표를 입력하세요 (x y): ");
//    scanf("%f %f", &x, &y);
//
//    if (x > 0 && y > 0)
//        printf("1사분면에 있습니다.\n");
//    else if (x < 0 && y > 0)
//        printf("2사분면에 있습니다.\n");
//    else if (x < 0 && y < 0)
//        printf("3사분면에 있습니다.\n");
//    else if (x > 0 && y < 0)
//        printf("4사분면에 있습니다.\n");
//    else if (x == 0 && y == 0)
//        printf("원점에 있습니다.\n");
//    else if (x == 0)
//        printf("y축 위에 있습니다.\n");
//    else if (y == 0)
//        printf("x축 위에 있습니다.\n");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() 
//{
//    int h, m; 
//
//    scanf("%d %d", &h, &m);
//
//    m -= 45; 
//
//    if (m < 0) 
//    {
//        m += 60;    
//        h -= 1;     
//
//        if (h < 0)
//            h = 23; 
//    }
//
//    printf("%d %d\n", h, m);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a;
//
//	printf("단 입력 : ");
//	scanf("%d", &a);
//
//	for (int i = 0;i < 9;i++)
//		printf("%d x %d = %d\n", a, i + 1, a * (i + 1));
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int N;
//	int a, b;
//
//	printf("테스트 케이스 입력 : ");
//	scanf("%d", &N);
//
//	for (int i = 0;i < N;i++)
//	{
//		printf("두 수 입력 : ");
//		scanf("%d %d", &a, &b);
//		printf("%d\n", a + b);
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int N;
//	int hap = 0;
//
//	printf("N값 입력 : ");
//	scanf("%d", &N);
//
//	for (int i = 1;i <=  N;i++)
//		hap += i;
//	printf("1부터 %d까지의 합 : %d\n", N, hap);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() 
//{
//    int N, v;
//    int arr[100];
//    int count = 0;
//
//    printf("정수 개수 입력 : ");
//    scanf("%d", &N);
//
//    printf("정수 입력 : ");
//    for (int i = 0; i < N; i++) 
//    {
//        scanf("%d", &arr[i]);
//    }
//    printf("찾고자 하는 정수 입력 : ");
//    scanf("%d", &v);
//
//    for (int i = 0; i < N; i++) 
//    {
//        if (arr[i] == v)
//            count++;
//    }
//    printf("%d는 %d개 있다.\n", v,count);
//}
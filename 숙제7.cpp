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
//	printf("���� �Է� : ");
//	scanf("%d", &data.N);
//
//	data.pNum = (int*)malloc(sizeof(int) * data.N);
//	srand((unsigned int)time(NULL));
//
//	printf("<�������� �Է¹��� �� ���>\n");
//	for (int i = 0; i < data.N; i++)
//	{
//		*(data.pNum + i) = (rand() % data.N) + 1;
//		printf("%2d", data.pNum[i]);
//	}
//
//	func_sort(&data);
//
//	printf("\n<������������ ���ĵ� �� ���>\n");
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
//	printf("�� �� �Է� : ");
//	scanf("%d %d", &a, &b);
//
//	printf("�� ���� �� : %d\n\n", a + b);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	printf("�� �� �Է� : ");
//	scanf("%d %d", &a, &b);
//
//	printf("�� ���� �� : %d\n\n", a - b);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	printf("�� �� �Է� : ");
//	scanf("%d %d", &a, &b);
//
//	printf("�� ���� �� : %d\n\n", a * b);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	printf("�� �� �Է� : ");
//	scanf("%d %d", &a, &b);
//
//	printf("�� ���� ������ �� : %d\n\n", a / b);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	printf("�� �� �Է� : ");
//	scanf("%d %d", &a, &b);
//
//	if (a < b)
//		printf("%d�� �� ũ��.\n", b);
//	else if (a > b)
//		printf("%d�� �� ũ��.\n", a);
//	else
//		printf("�� ���� ����.\n");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() 
//{
//    int score;
//    char grade;
//
//    printf("���� ������ �Է��ϼ��� : ");
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
//    printf("����� ������ %c �Դϴ�.\n", grade);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() 
//{
//    int year;
//
//    printf("������ �Է��ϼ���: ");
//    scanf("%d", &year);
//
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
//        printf("%d���� �����Դϴ�.\n", year);
//    else 
//        printf("%d���� ����Դϴ�.\n", year);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() 
//{
//    float x, y;
//
//    printf("���� ��ǥ�� �Է��ϼ��� (x y): ");
//    scanf("%f %f", &x, &y);
//
//    if (x > 0 && y > 0)
//        printf("1��и鿡 �ֽ��ϴ�.\n");
//    else if (x < 0 && y > 0)
//        printf("2��и鿡 �ֽ��ϴ�.\n");
//    else if (x < 0 && y < 0)
//        printf("3��и鿡 �ֽ��ϴ�.\n");
//    else if (x > 0 && y < 0)
//        printf("4��и鿡 �ֽ��ϴ�.\n");
//    else if (x == 0 && y == 0)
//        printf("������ �ֽ��ϴ�.\n");
//    else if (x == 0)
//        printf("y�� ���� �ֽ��ϴ�.\n");
//    else if (y == 0)
//        printf("x�� ���� �ֽ��ϴ�.\n");
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
//	printf("�� �Է� : ");
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
//	printf("�׽�Ʈ ���̽� �Է� : ");
//	scanf("%d", &N);
//
//	for (int i = 0;i < N;i++)
//	{
//		printf("�� �� �Է� : ");
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
//	printf("N�� �Է� : ");
//	scanf("%d", &N);
//
//	for (int i = 1;i <=  N;i++)
//		hap += i;
//	printf("1���� %d������ �� : %d\n", N, hap);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() 
//{
//    int N, v;
//    int arr[100];
//    int count = 0;
//
//    printf("���� ���� �Է� : ");
//    scanf("%d", &N);
//
//    printf("���� �Է� : ");
//    for (int i = 0; i < N; i++) 
//    {
//        scanf("%d", &arr[i]);
//    }
//    printf("ã���� �ϴ� ���� �Է� : ");
//    scanf("%d", &v);
//
//    for (int i = 0; i < N; i++) 
//    {
//        if (arr[i] == v)
//            count++;
//    }
//    printf("%d�� %d�� �ִ�.\n", v,count);
//}